//
//  Deque.c
//  Deque
//
//  Created by SonChangWoo on 2016. 7. 12..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

void DequeInit(Deque * pdeque) {
    pdeque->head = NULL;
    pdeque->tail = NULL;
}

int DQIsEmpty(Deque * pdeque) {
    if (pdeque->head == NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}

void DQAddFirst(Deque * pdeque, Data data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->next = pdeque->head;
    newNode->data = data;
    
    if (DQIsEmpty(pdeque)) {
        pdeque->tail = newNode;
    } else {
        pdeque->head->previous = newNode;
    }
    
    newNode->previous = NULL;
    pdeque->head = newNode;
}

void DQAddLast(Deque * pdeque, Data data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->data = data;
    newNode->previous = pdeque->tail;
    
    if (DQIsEmpty(pdeque)) {
        pdeque->head = newNode;
    } else {
        pdeque->tail->next = newNode;
    }
    
    newNode->next = NULL;
    pdeque->tail = newNode;
}

Data DQRemoveFirst(Deque * pdeque) {
    Node * rnode = pdeque->head;
    Data rdata = rnode->data;
    
    if (DQIsEmpty(pdeque)) {
        printf("Deque is Empty");
        exit(-1);
    }
    
    pdeque->head = pdeque->head->next;
    free(rnode);
    
    if (pdeque->head == NULL) {
        pdeque->tail = NULL;
    } else {
        pdeque->head->previous = NULL;
    }
    
    return rdata;
}

Data DQRemoveLast(Deque * pdeque) {
    Node * rnode = pdeque->tail;
    Data rdata = rnode->data;
    
    if (DQIsEmpty(pdeque)) {
        printf("Deque is Empty");
        exit(-1);
    }
    
    pdeque->tail = pdeque->tail->previous;
    free(rnode);
    
    if (pdeque->tail == NULL) {
        pdeque->head = NULL;
    } else {
        pdeque->tail->next = NULL;
    }
    
    return rdata;
}

Data DQGetFirst(Deque * pdeque) {
    if (DQIsEmpty(pdeque)) {
        printf("Deque is Empty");
        exit(-1);
    }
    
    return pdeque->head->data;
}

Data DQGetLast(Deque * pdeque) {
    if (DQIsEmpty(pdeque)) {
        printf("Deque is Empty");
        exit(-1);
    }
    
    return pdeque->tail->data;
}


