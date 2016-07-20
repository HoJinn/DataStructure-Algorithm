//
//  Table.h
//  SimpleHashTable
//
//  Created by SonChangWoo on 2016. 7. 20..
//  Copyright © 2016년 SonChangWoo. All rights reserved.
//

#ifndef Table_h
#define Table_h

#include "Slot.h"

#define MAX_TBL 100

typedef int HashFunc(Key k);

typedef struct _table
{
    Slot tbl[MAX_TBL];
    HashFunc * hf;
} Table;

void TBLInit(Table * pt, HashFunc * f);

void TBLInsert(Table * pt, Key k, Value val);

Value TBLDelete(Table * pt, Key k);

Value TBLSearch(Table * pt, Key k);



#endif /* Table_h */
