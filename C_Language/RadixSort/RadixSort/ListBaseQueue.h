//
//  ListBaseQueue.h
//  ListBaseQueue
//
//  Created by SonChangWoo on 2016. 7. 12..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef ListBaseQueue_h
#define ListBaseQueue_h

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
} Node;

typedef struct _IQueue
{
    Node * front;
    Node * rear;
} LQueue;

typedef LQueue Queue;

void QueueInit(Queue * pqueue);
int QIsEmpty(Queue * pqueue);

void Enqueue(Queue * pqueue, Data data);
Data Dequeue(Queue * pqueue);

Data QPeek(Queue * pqueue);

#endif /* ListBaseQueue_h */
