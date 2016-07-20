//
//  Person.c
//  SimpleHashTable
//
//  Created by SonChangWoo on 2016. 7. 20..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Person.h"

int GetSSN(Person * p) {
    return p->ssn;
}

void ShowPersonInfo(Person * p) {
    printf("personal number : %d\n", p->ssn);
    printf("name : %s\n", p->name);
    printf("address : %s\n\n", p->addr);
}

Person * MakePersonData(int ssn, char * name, char * addr) {
    Person * newP = (Person *) malloc(sizeof(Person));
    newP->ssn = ssn;
    strcpy(newP->name, name);
    strcpy(newP->addr, addr);
    return newP;
}