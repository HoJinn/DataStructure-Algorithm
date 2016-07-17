//
//  SimpleHeap.h
//  SimpleHeap
//
//  Created by SonChangWoo on 2016. 7. 15..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef SimpleHeap_h
#define SimpleHeap_h

#define TRUE 1
#define FALSE 0

#define HEAP_LEN 100

typedef int HData;
typedef int PriorityComp(HData data1, HData data2);


typedef struct _heap
{
    PriorityComp * comp;
    int numberOfData;
    HData heapArr[HEAP_LEN];
} Heap;

void HeapInit(Heap * pheap, PriorityComp pc);
int HIsEmpty(Heap * pheap);

void HInsert(Heap * pheap, HData data);
HData HDelete(Heap * pheap);

#endif /* SimpleHeap_h */
