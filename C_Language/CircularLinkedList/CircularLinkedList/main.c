//
//  main.c
//  CircularLinkedList
//
//  Created by SonChangWoo on 2016. 7. 8..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include "CircularLinkedList.h"

int main() {
    // Create & init
    List list;
    int data, i, nodeNumber;
    ListInit(&list);
    
    // Save data
    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);
    LInsertFront(&list, 2);
    LInsertFront(&list, 1);
    
    // print Three times
    if (LFirst(&list, &data)) {
        printf("%d ", data);
        
        for (i=0; i<LCount(&list)*3-1;i++) {
            if (LNext(&list, &data)) {
                printf("%d ", data);
            }
        }
    }
    
    printf("\n");
    
    // delete item
    nodeNumber = LCount(&list);
    
    if (nodeNumber != 0) {
        LFirst(&list, &data);
        if (data%2 == 0) {
            LRemove(&list);
        }
        
        for (i=0;i<nodeNumber-1;i++) {
            LNext(&list, &data);
            if (data%2 == 0) {
                LRemove(&list);
            }
        }
    }
    
    if (LFirst(&list, &data)) {
        printf("%d ", data);
        
        for (i=0; i<LCount(&list)-1;i++) {
            if (LNext(&list, &data)) {
                printf("%d ", data);
            }
        }
    }
    
    printf("\n");
    
    return 0;
}
