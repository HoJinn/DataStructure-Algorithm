//
//  main.c
//  UnderstandTable
//
//  Created by SonChangWoo on 2016. 7. 20..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#include <stdio.h>

typedef struct _empInfo
{
    int empNum;
    int age;
} EmpInfo;

int GetHashValue(int empNum) {
    return empNum %100;
}

int main() {
    EmpInfo empInfoArr[100];
    
    EmpInfo emp1 = {20120003, 42};
    EmpInfo emp2 = {20130033, 33};
    EmpInfo emp3 = {20140037, 28};
    
    EmpInfo r1, r2, r3;
    
    empInfoArr[GetHashValue(emp1.empNum)] = emp1;
    empInfoArr[GetHashValue(emp2.empNum)] = emp2;
    empInfoArr[GetHashValue(emp3.empNum)] = emp3;
    
    r1 = empInfoArr[GetHashValue(20120003)];
    r2 = empInfoArr[GetHashValue(20130033)];
    r3 = empInfoArr[GetHashValue(20140037)];
    
    printf("num %d, age %d\n", r1.empNum, r1.age);
    printf("num %d, age %d\n", r2.empNum, r2.age);
    printf("num %d, age %d\n", r3.empNum, r3.age);
    return 0;
}
