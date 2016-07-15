//
//  PriorityQueue.h
//  SimpleHeap
//
//  Created by SonChangWoo on 2016. 7. 15..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef PriorityQueue_h
#define PriorityQueue_h

#include "SimpleHeap.h"

typedef Heap PQueue;
typedef HData PQData;

void PQueueInit(PQueue * ppq, PriorityComp pc);
int PQIsEmpty(PQueue * ppq);

void PEnqueue(PQueue * ppq, PQData data);
PQData PDequeue(PQueue * ppq);

#endif /* PriorityQueue_h */
