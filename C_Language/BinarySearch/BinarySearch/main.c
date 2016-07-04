//
//  main.c
//  BinarySearch
//
//  Created by SonChangWoo on 2016. 7. 4..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
//  O(logn)

#include <stdio.h>

int BinarySearch(int array[], int length, int target);
int BinarySearchRecursive(int array[], int first, int last, int target);

int main() {
    int array[] = {1,3,4,5,6,8,9};
    int index;
    
    index = BinarySearch(array, sizeof(array)/sizeof(int), 8);
    
    if (index == -1) {
        printf("Search fail \n");
    } else {
        printf("target index : %d\n", index);
    }
    
    index = BinarySearchRecursive(array, 0, sizeof(array)/sizeof(int)-1, 3);
    
    if (index == -1) {
        printf("Search fail \n");
    } else {
        printf("target index : %d\n", index);
    }
    
    return 0;
}

int BinarySearch(int array[], int length, int target) {
    int first = 0;
    int last = length-1;
    int middle;
    
    while(first <= last) {
        middle = (first+last) / 2;
        
        if (target == array[middle]) {
            return middle;
        } else {
            if (target < array[middle]) {
                last = middle-1;
            } else {
                first = middle+1;
            }
        }
    }
    
    return -1;
}



int BinarySearchRecursive(int array[], int first, int last, int target) {
    int middle;
    
    if (first > last) {
        return -1;
    }
    
    middle = (first + last) / 2;
    
    if (array[middle] == target) {
        return middle;
    } else if (array[middle] > target) {
        return BinarySearchRecursive(array, first, middle-1, target);
    } else {
        return BinarySearchRecursive(array, middle+1, last, target);
    }
}