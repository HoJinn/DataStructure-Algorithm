//
//  main.c
//  MergeSort
//
//  Created by SonChangWoo on 2016. 7. 17..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

void MergeTwoArea(int arr[], int left, int right, int mid) {
    int fIdx = left;
    int rIdx = mid+1;
    int i;
    
    int * sortArr = (int *) malloc(sizeof(int)*(right+1));
    int sIdx = left;
    
    while (fIdx <= mid && rIdx <= right) {
        if (arr[fIdx] <= arr[rIdx]) {
            sortArr[sIdx] = arr[fIdx++];
        } else {
            sortArr[sIdx] = arr[rIdx++];
        }
        sIdx++;
    }
    
    if (fIdx > mid) {
        for (i=rIdx;i<=right;i++, sIdx++) {
            sortArr[sIdx] = arr[i];
        }
    } else {
        for (i=fIdx; i<=mid; i++, sIdx++) {
            sortArr[sIdx] = arr[i];
        }
    }
    
    for (i=left;i<=right;i++) {
        arr[i] = sortArr[i];
    }
    
    free(sortArr);
}

void MergeSort(int arr[], int left, int right) {
    int mid;
    
    if (left < right) {
        mid = (left+right)/2;
        
        MergeSort(arr, left, mid);
        MergeSort(arr, mid+1, right);
        
        MergeTwoArea(arr, left, right, mid);
    }
}

int main() {
    int arr[7] = {5,6,3,7,2,1,4};
    int i;
    
    MergeSort(arr, 0, sizeof(arr)/sizeof(int) -1);
    
    for (i=0;i<7;i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}