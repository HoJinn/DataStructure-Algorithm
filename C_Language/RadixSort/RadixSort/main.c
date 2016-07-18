//
//  main.c
//  RadixSort
//
//  Created by SonChangWoo on 2016. 7. 18..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "ListBaseQueue.h"

#define BUCKET_NUM 10

void RadixSort(int arr[], int num, int maxLen) {
    Queue bucket[BUCKET_NUM];
    int bi;
    int pos;
    int di;
    int divfac = 1;
    int radix;
    
    for (bi=0; bi<BUCKET_NUM; bi++) {
        QueueInit(&bucket[bi]);
    }
    
    for (pos=0; pos <maxLen; pos++) {
        for (di =0; di<num;di++) {
            radix = (arr[di]/divfac) %10;
            
            Enqueue(&bucket[radix], arr[di]);
        }
    
    
        for (bi=0, di=0; bi<BUCKET_NUM;bi++) {
            while (!QIsEmpty(&bucket[bi])) {
                arr[di++] = Dequeue(&bucket[bi]);
            }
        }
        
        divfac *= 10;
    }
    
    
}

int main() {
    int arr[7] = {13, 212, 14, 7151, 10987, 6, 15};
    
    int len = sizeof(arr)/sizeof(int);
    int i;
    
    RadixSort(arr, len, 5);
    
    for(i=0;i<len;i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
