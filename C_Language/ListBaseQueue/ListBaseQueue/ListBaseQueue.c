//
//  ListBaseQueue.c
//  ListBaseQueue
//
//  Created by SonChangWoo on 2016. 7. 12..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "ListBaseQueue.h"

void QueueInit(Queue * pqueue) {
    pqueue->front = NULL;
    pqueue->rear = NULL;
}

int QIsEmpty(Queue * pqueue) {
    if (pqueue->front == NULL) {
        return TRUE;
    } else {
        return FALSE;
    }
}

void Enqueue(Queue * pqueue, Data data) {
    Node * newNode = (Node *) malloc(sizeof(Node));
    newNode->next = NULL;
    newNode->data = data;
    
    if (QIsEmpty(pqueue)) {
        pqueue->front = newNode;
        pqueue->rear = newNode;
    } else {
        pqueue->rear->next = newNode;
        pqueue->rear = newNode;
    }
}

Data Dequeue(Queue * pqueue) {
    Node * delNode;
    Data rdata;
    
    if (QIsEmpty(pqueue)) {
        printf("Queue is Empty");
        exit(-1);
    }
    
    delNode = pqueue->front;
    rdata = delNode->data;
    
    pqueue->front = delNode->next;
    
    free(delNode);
    return rdata;
}

Data QPeek(Queue * pqueue) {
    if (QIsEmpty(pqueue)) {
        printf("Queue is Empty");
        exit(-1);
    }
    
    return pqueue->front->data;
}