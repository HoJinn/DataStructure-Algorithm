//
//  main.c
//  LinkedList
//
//  Created by SonChangWoo on 2016. 7. 7..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
#include "LinkedList.h"
#include <stdio.h>

int WhoIsPrecede(int data1, int data2) {
    if (data1 < data2) {
        return 0;
    } else {
        return 1;
    }
}


int main() {
    
    // Create List & init
    List list;
    int data;
    ListInit(&list);
    
    // Set Sorting Rule
    SetSortRule(&list, WhoIsPrecede);
    
    // Save data
    LInsert(&list, 11);
    LInsert(&list, 11);
    LInsert(&list, 22);
    LInsert(&list, 22);
    LInsert(&list, 33);
    
    // print data
    printf("number of current data : %d\n", LCount(&list));
    
    if (LFirst(&list, &data)) {
        printf("%d ", data);
        
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n\n");
    
    // Delete data
    if (LFirst(&list, &data)) {
        if (data == 22) {
            LRemove(&list);
        }
        
        while (LNext(&list, &data)) {
            if (data == 22) {
                LRemove(&list);
            }
        }
    }
    
    // print data
    printf("number of current data : %d\n", LCount(&list));
    
    if (LFirst(&list, &data)) {
        printf("%d ", data);
        
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
    }
    printf("\n\n");
}