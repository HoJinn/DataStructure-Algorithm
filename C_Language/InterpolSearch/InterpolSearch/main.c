//
//  main.c
//  InterpolSearch
//
//  Created by SonChangWoo on 2016. 7. 18..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>

int ISearch(int arr[], int first, int last, int target) {
    int mid;
    
    if (arr[first] > target || arr[last] < target) {
        return -1;
    }
    
    mid = ((double) (target-arr[first]) / (arr[last]-arr[first]) * (last-first)) + first;
    
    if (arr[mid] == target) {
        return mid;
    } else if (target < arr[mid]) {
        return ISearch(arr, first, mid-1, target);
    } else {
        return ISearch(arr, mid+1, last, target);
    }
}

int main() {
    int arr[] = {1,3,5,7,10};
    int idx;
    
    idx = ISearch(arr, 0, sizeof(arr)/sizeof(int)-1, 7);
    if (idx==-1) {
        printf("Search Fail\n");
    } else {
        printf("target Index : %d\n", idx);
    }
}
