//
//  ListMain.c
//  ArrayList
//
//  Created by SonChangWoo on 2016. 7. 6..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Point.h"
#include "ArrayList.h"

int main() {
    
    // init ArrayList
    List list;
    Point compPos;
    Point * ppos;
    
    ListInit(&list);
    
    // Save Data
    ppos = (Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 2, 1);
    LInsert(&list, ppos);
    
    ppos = (Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 2, 2);
    LInsert(&list, ppos);
    
    ppos = (Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 3, 1);
    LInsert(&list, ppos);
    
    ppos = (Point *) malloc(sizeof(Point));
    SetPointPos(ppos, 3, 2);
    LInsert(&list, ppos);
    

    printf("number of current data : %d\n", LCount(&list));
    
    if (LFirst(&list, &ppos)) {
        ShowPointPos(ppos);
        
        while(LNext(&list, &ppos)) {
            ShowPointPos(ppos);
        }
    }
    
    printf("\n\n");
    
    compPos.xpos=2;
    compPos.ypos=0;
    
    // Delete Data
    if (LFirst(&list, &ppos)) {
        if (PointComp(ppos, &compPos) == 1) {
            ppos = LRemove(&list);
            free(ppos);
        }
        
        while(LNext(&list, &ppos)) {
            if (PointComp(ppos, &compPos) == 1) {
                ppos = LRemove(&list);
                free(ppos);
            }
        }
    }
    
    printf("number of current data : %d\n", LCount(&list));
    
    if (LFirst(&list, &ppos)) {
        ShowPointPos(ppos);
        
        while(LNext(&list, &ppos)) {
            ShowPointPos(ppos);
        }
    }
    
    printf("\n\n");
    
    return 0;
}
