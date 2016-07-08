//
//  main.c
//  DoublyLinkedList
//
//  Created by SonChangWoo on 2016. 7. 8..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "DoublyLinkedList.h"

int main() {
    // Init List
    List list;
    int data;
    ListInit(&list);
    
    // Save Data
    LInsert(&list, 1);
    LInsert(&list, 2);
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsert(&list, 6);
    LInsert(&list, 7);
    LInsert(&list, 8);
    
    // print item
    if (LFirst(&list, &data)) {
        printf("%d ", data);
        
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
        
        while(LPrevious(&list, &data)) {
            printf("%d ", data);
        }
        
        printf("\n\n");
    }
    
    // Delete Data
    if (LFirst(&list, &data)) {
        if (data%2 == 0) {
            LRemove(&list);
        }
        
        while (LNext(&list, &data)) {
            if (data%2 == 0) {
                LRemove(&list);
            }
        }
    }
    
    if (LFirst(&list, &data)) {
        printf("%d ", data);
        
        while (LNext(&list, &data)) {
            printf("%d ", data);
        }
        
        while(LPrevious(&list, &data)) {
            printf("%d ", data);
        }
        
        printf("\n\n");
    }
        
    return 0;
}