//
//  LinkedList.c
//  LinkedList
//
//  Created by SonChangWoo on 2016. 7. 7..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include "LinkedList.h"

void ListInit(List * plist) {
    plist->head = (Node *) malloc(sizeof(Node));
    plist->head->next = NULL;
    plist->comp = NULL;
    plist->numberOfData = 0;
}

void FInsert(List * plist, LData data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    
    newNode->next = plist->head->next;
    plist->head->next = newNode;
    
    (plist->numberOfData)++;
}

void SInsert(List * plist, LData data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    Node * pred = plist->head;
    newNode->data = data;
    
    while (pred->next != NULL && plist->comp(data, pred->next->data) != 0) {
        pred = pred->next;
    }
    
    newNode->next = pred->next;
    pred->next = newNode;
    
    plist->numberOfData++;
}

void LInsert(List * plist, LData data) {
    if (plist->comp == NULL) {
        FInsert(plist, data);
    } else {
        SInsert(plist, data);
    }
}

int LFirst(List * plist, LData * pdata) {
    if (plist->head->next == NULL) {
        return FALSE;
    }
    
    plist->before = plist->head;
    plist->current = plist->head->next;
    
    *pdata = plist->current->data;
    
    return TRUE;
}

int LNext(List * plist, LData * pdata) {
    if (plist->current->next == NULL) {
        return FALSE;
    }
    
    plist->before = plist->current;
    plist->current = plist->current->next;
    
    *pdata = plist->current->data;
    return TRUE;
}

LData LRemove(List * plist) {
    Node * rpos = plist->current;
    LData rdata = rpos->data;
    
    plist->before->next = plist->current->next;
    plist->current = plist->before;
    
    free(rpos);
    (plist->numberOfData)--;
    return rdata;
}

int LCount(List * plist) {
    return plist->numberOfData;
}

void SetSortRule(List * plist, int (*comp)(LData data1, LData data2)) {
    plist->comp = comp;
}