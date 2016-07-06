//
//  ArrayList.c
//  ArrayList
//
//  Created by SonChangWoo on 2016. 7. 6..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "ArrayList.h"

void ListInit(List * plist) {
    (plist->numberOfData) = 0;
    (plist->currentPosition) = -1;
}

void LInsert(List * plist, LData data) {
    if (plist->numberOfData > LIST_LEN) {
        puts("impossible Save");
        return;
    }
    
    plist->arr[plist->numberOfData] = data;
    (plist->numberOfData)++;
}

int LFirst(List * plist, LData * pdata) {
    if (plist->numberOfData==0) {
        return FALSE;
    }
    
    plist->currentPosition = 0;
    *pdata = plist->arr[0];
    return TRUE;
}

int LNext(List * plist, LData * pdata) {
    if (plist->currentPosition >= plist->numberOfData -1) {
        return FALSE;
    }
    
    plist->currentPosition++;
    *pdata = plist->arr[plist->currentPosition];
    return TRUE;
}

LData LRemove(List * plist) {
    int rpos = plist->currentPosition;
    int number = plist->numberOfData;
    int i;
    LData rdata = plist->arr[rpos];
    
    for (i=rpos;i<number-1;i++) {
        plist->arr[i] = plist->arr[i+1];
    }
    
    plist->numberOfData--;
    plist->currentPosition--;
    return rdata;
}

int LCount(List * plist) {
    return plist->numberOfData;
}