//
//  CircularQueue.c
//  CircularQueue
//
//  Created by SonChangWoo on 2016. 7. 12..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "CircularQueue.h"

void QueueInit(Queue * pqueue) {
    pqueue->front = 0;
    pqueue->rear = 0;
}

int QIsEmpty(Queue * pqueue) {
    if (pqueue->front == pqueue->rear) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int NextPosIdx(int pos) {
    if (pos== QUEUE_LEN-1) {
        return 0;
    } else {
        return pos+1;
    }
}

void Enqueue(Queue * pqueue, Data data) {
    if (NextPosIdx(pqueue->rear) == pqueue->front) {
        printf("Queue is FULL");
        exit(-1);
    }
    
    pqueue->rear = NextPosIdx(pqueue->rear);
    pqueue->queueArray[pqueue->rear] = data;
}

Data Dequeue(Queue * pqueue) {
    if (QIsEmpty(pqueue)) {
        printf("Queue is Empty");
        exit(-1);
    }
    
    pqueue->front = NextPosIdx(pqueue->front);
    return pqueue->queueArray[pqueue->front];
}

Data QPeek(Queue * pqueue) {
    if (QIsEmpty(pqueue)) {
        printf("Queue is Empty");
        exit(-1);
    }
    
    return pqueue->queueArray[NextPosIdx(pqueue->front)];
}