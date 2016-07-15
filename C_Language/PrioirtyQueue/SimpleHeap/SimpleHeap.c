//
//  SimpleHeap.c
//  SimpleHeap
//
//  Created by SonChangWoo on 2016. 7. 15..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include "SimpleHeap.h"

void HeapInit(Heap * pheap, PriorityComp pc) {
    pheap->numberOfData = 0;
    pheap->comp = pc;
}

int HIsEmpty(Heap * pheap) {
    if (pheap->numberOfData == 0) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int GetParentIDX(int idx) {
    return idx/2;
}

int GetLChildIDX(int idx) {
    return idx*2;
}

int GetRChildIDX(int idx) {
    return GetLChildIDX(idx)+1;
}

int GetHiPriChildIDX(Heap * pheap, int idx) {
    if (GetLChildIDX(idx) > pheap->numberOfData) {
        return 0;
    } else if (GetLChildIDX(idx) == pheap->numberOfData) {
        return GetLChildIDX(idx);
    } else {
        if (pheap->comp(pheap->heapArr[GetLChildIDX(idx)], pheap->heapArr[GetRChildIDX(idx)]) < 0) {
            return GetRChildIDX(idx);
        } else {
            return GetLChildIDX(idx);
        }
    }
}

void HInsert(Heap * pheap, HData data) {
    int idx = pheap->numberOfData+1;
    
    while (idx != 1) {
        if (pheap->comp(data, pheap->heapArr[GetParentIDX(idx)]) > 0) {
            pheap->heapArr[idx] = pheap->heapArr[GetParentIDX(idx)];
            idx = GetParentIDX(idx);
        } else {
            break;
        }
    }
    
    pheap->heapArr[idx] = data;
    pheap->numberOfData += 1;
}

HData HDelete(Heap * pheap) {
    HData rdata = (pheap->heapArr[1]);
    HData lastElem = pheap->heapArr[pheap->numberOfData];
    
    int parentIdx = 1;
    int childIdx;
    
    while (childIdx = GetHiPriChildIDX(pheap, parentIdx)) {
        if (pheap->comp(lastElem, pheap->heapArr[childIdx]) >= 0) {
            break;
        }
        
        pheap->heapArr[parentIdx] = pheap->heapArr[childIdx];
        parentIdx = childIdx;
    }
    
    pheap->heapArr[parentIdx] = lastElem;
    pheap->numberOfData -= 1;
    return rdata;
}