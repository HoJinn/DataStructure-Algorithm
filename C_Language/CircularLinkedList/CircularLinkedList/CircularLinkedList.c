//
//  CircularLinkedList.c
//  CircularLinkedList
//
//  Created by SonChangWoo on 2016. 7. 8..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "CircularLinkedList.h"

void ListInit(List * plist) {
    plist->tail = NULL;
    plist->current = NULL;
    plist->before = NULL;
    plist->numberOfData = 0;
}

void LInsertFront(List * plist, Data data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    
    if (plist->tail == NULL) {
        plist->tail = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = plist->tail->next;
        plist->tail->next = newNode;
    }
    
    plist->numberOfData++;
}

void LInsert(List * plist, Data data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    
    if (plist->tail==NULL) {
        plist->tail = newNode;
        newNode->next=newNode;
    } else {
        newNode->next = plist->tail->next;
        plist->tail->next = newNode;
        plist->tail = newNode;
    }
    plist->numberOfData++;
}

int LFirst(List * plist, Data * pdata) {
    if (plist->tail == NULL) {
        return FALSE;
    }
    
    plist->before = plist->tail;
    plist->current = plist->tail->next;
    
    *pdata = plist->current->data;
    return TRUE;
}

int LNext(List * plist, Data * pdata) {
    if (plist->tail == NULL) {
        return FALSE;
    }
    
    plist->before = plist->current;
    plist->current = plist->current->next;
    
    *pdata = plist->current->data;
    return TRUE;
}

Data LRemove(List * plist) {
    Node * rpos = plist->current;
    Data rdata = rpos->data;
    
    if (rpos == plist->tail) {
        if (plist->tail == plist->tail->next) {
            plist->tail = NULL;
        } else {
            plist->tail = plist->before;
        }
    }
    
    plist->before->next = plist->current->next;
    plist->current = plist->before;
    
    free(rpos);
    plist->numberOfData--;
    return rdata;
}

int LCount(List * plist) {
    return plist->numberOfData;
}