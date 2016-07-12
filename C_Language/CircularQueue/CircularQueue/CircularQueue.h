//
//  CircularQueue.h
//  CircularQueue
//
//  Created by SonChangWoo on 2016. 7. 12..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef CircularQueue_h
#define CircularQueue_h

#define TRUE 1
#define FALSE 0

#define QUEUE_LEN 100
typedef int Data;

typedef struct _cQueue
{
    int front;
    int rear;
    Data queueArray[QUEUE_LEN];
} CQueue;

typedef CQueue Queue;

void QueueInit(Queue * pqueue);
int QIsEmpty(Queue * pqueue);

void Enqueue(Queue * pqueue, Data data);
Data Dequeue(Queue * pqueue);
Data QPeek(Queue * pqueue);

#endif /* CircularQueue_h */
