//
//  main.c
//  SimpleHashTable
//
//  Created by SonChangWoo on 2016. 7. 20..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
#include "Table.h"

int MyHashFunc(int k) {
    return k % 100;
}

int main() {
    Table myTbl;
    Person * np;
    Person * sp;
    Person * rp;
    
    TBLInit(&myTbl, MyHashFunc);
    
    np = MakePersonData(20120003, "Lee", "Seoul");
    TBLInsert(&myTbl, GetSSN(np), np);
    np = MakePersonData(20130012, "Kim", "Busan");
    TBLInsert(&myTbl, GetSSN(np), np);
    np = MakePersonData(20140049, "Han", "Jeju");
    TBLInsert(&myTbl, GetSSN(np), np);
    
    sp = TBLSearch(&myTbl, 20120003);
    if (sp != NULL) {
        ShowPersonInfo(sp);
    }
    
    sp = TBLSearch(&myTbl, 20130012);
    if (sp != NULL) {
        ShowPersonInfo(sp);
    }
    
    sp = TBLSearch(&myTbl, 20140049);
    if (sp != NULL) {
        ShowPersonInfo(sp);
    }
    
    rp = TBLDelete(&myTbl, 20120003);
    if (rp != NULL) {
        free(rp);
    }
    
    return 0;
}
