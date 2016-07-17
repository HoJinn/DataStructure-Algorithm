//
//  main.c
//  SelectionSort
//
//  Created by SonChangWoo on 2016. 7. 17..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>


void SelectionSort(int arr[], int n) {
    int i, j;
    int temp;
    int maxidx;
    
    for (i=0;i<n-1;i++) {
        maxidx = i;
        
        for (j=i+1;j<n;j++) {
            if (arr[j] < arr[maxidx]) {
                maxidx = j;
            }
            
            temp = arr[i];
            arr[i] = arr[maxidx];
            arr[maxidx] = temp;
        }
    }
}


int main() {
    int arr[4] = {3, 2, 4, 1};
    int i;
    
    SelectionSort(arr, sizeof(arr)/sizeof(int));
    
    for (i=0;i<4;i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}