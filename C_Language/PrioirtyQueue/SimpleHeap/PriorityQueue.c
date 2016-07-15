//
//  PriorityQueue.c
//  SimpleHeap
//
//  Created by SonChangWoo on 2016. 7. 15..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include "PriorityQueue.h"
#include "SimpleHeap.h"

void PQueueInit(PQueue * ppq, PriorityComp pc) {
    HeapInit(ppq, pc);
}

int PQIsEmpty(PQueue * ppq) {
    return HIsEmpty(ppq);
}

void PEnqueue(PQueue * ppq, PQData data) {
    HInsert(ppq, data);
}

PQData PDequeue(PQueue * ppq) {
    return HDelete(ppq);
}
