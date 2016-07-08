//
//  DoublyLinkedList.c
//  DoublyLinkedList
//
//  Created by SonChangWoo on 2016. 7. 8..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "DoublyLinkedList.h"

void ListInit(List * plist) {
    plist->head = NULL;
    plist->numberOfData = 0;
}

void LInsert(List * plist, Data data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    
    newNode->next = plist->head;
    if (plist->head != NULL) {
        plist->head->previous = newNode;
    }
    newNode->previous = NULL;
    plist->head = newNode;
    
    plist->numberOfData++;
}

int LFirst(List * plist, Data * pdata) {
    if (plist->head==NULL) {
        return FALSE;
    }
    
    plist->current = plist->head;
    *pdata = plist->current->data;
    
    return TRUE;
}

int LNext(List * plist, Data * pdata) {
    if (plist->current->next == NULL) {
        return FALSE;
    }
    
    plist->current = plist->current->next;
    *pdata = plist->current->data;
    
    return TRUE;
}

int LPrevious(List * plist, Data * pdata) {
    if (plist->current->previous == NULL) {
        return FALSE;
    }
    
    plist->current = plist->current->previous;
    *pdata = plist->current->data;
    
    return TRUE;
}

Data LRemove(List * plist) {
    Node * rpos = plist->current;
    Data rdata = rpos->data;
    
    if (rpos == plist->head) {
        if (plist->head->next == NULL) {
            plist->head = NULL;
        } else {
            plist->head = plist->head->next;
        }
    }
    
    if (rpos->next == NULL) {
        plist->current->previous->next = NULL;
    } else {
        if (rpos->previous == NULL) {
            plist->current->next->previous = NULL;
        } else {
            plist->current->next->previous = plist->current->previous;
            plist->current->previous->next = plist->current->next;
        }
    }
    

    free(rpos);
    plist->numberOfData--;
    return rdata;
}

int LCount(List * plist) {
    return plist->numberOfData;
}