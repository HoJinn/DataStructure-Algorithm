//
//  Deque.h
//  Deque
//
//  Created by SonChangWoo on 2016. 7. 12..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef Deque_h
#define Deque_h

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node
{
    Data data;
    struct _node * next;
    struct _node * previous;
} Node;

typedef struct _dlDeque
{
    Node * head;
    Node * tail;
} DLDeque;

typedef DLDeque Deque;

void DequeInit(Deque * pdeque);
int DQIsEmpty(Deque * pdeque);

void DQAddFirst(Deque * pdeque, Data data);
void DQAddLast(Deque * pdeque, Data data);

Data DQRemoveFirst(Deque * pdeque);
Data DQRemoveLast(Deque * pdeque);

Data DQGetFirst(Deque * pdeque);
Data DQGerLast(Deque * pdeque);

#endif /* Deque_h */
