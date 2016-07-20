//
//  Person.h
//  SimpleHashTable
//
//  Created by SonChangWoo on 2016. 7. 20..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef Person_h
#define Person_h

#define STR_LEN 50

typedef struct _person
{
    int ssn;
    char name[STR_LEN];
    char addr[STR_LEN];
} Person;

int GetSSN(Person * p);
void ShowPersonInfo(Person * p);
Person * MakePersonData(int ssn, char * name, char * addr);

#endif /* Person_h */
