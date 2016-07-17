//
//  main.c
//  InsertionSort
//
//  Created by SonChangWoo on 2016. 7. 17..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>

void InsertSort(int arr[], int n) {
    int i, j;
    int insData;
    
    for (i=1;i<n;i++) {
        insData = arr[i]; // target Data
        
        for (j= i-1;j>=0;j--) {
            if (arr[j] >insData) {
                arr[j+1] = arr[j];
            } else {
                break;
            }
        }
        
        arr[j+1] = insData;
    }
}

int main() {
    int arr[5] = {5, 3, 2, 4, 1};
    int i;
    
    InsertSort(arr, sizeof(arr)/sizeof(int));
    
    for(i=0;i<5;i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}