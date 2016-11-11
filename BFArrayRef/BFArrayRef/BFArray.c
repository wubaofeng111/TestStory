//
//  BFArray.c
//  BFArrayRef
//
//  Created by friday on 16/11/10.
//  Copyright © 2016年 friday. All rights reserved.
//

#include "BFArray.h"

#define BFLinkNodeAlloc (BFLinkNode*) malloc(sizeof(BFLinkNode))
#define BFArrayAlloc (BFArrayRef*)malloc(sizeof(struct BFArray))
BFArrayRef BFArrayCreate()
{
    
    BFArrayRef *array = BFArrayAlloc;
    array->count = 0;
    
    array->header = BFLinkNodeAlloc;
    array->tail   = BFLinkNodeAlloc;
    
    array->header->next = array->tail;
    array->header->prev = NULL;
    array->tail  ->prev = array->header;
    array->tail  ->next = NULL;
    
    return *array;
}
BFArrayRef BFArrayCreateWithArray(BFArrayRef*array)
{
    BFArrayRef newArray = BFArrayCreate();
    BFArrayRef*newArrayRef = &newArray;
    BFLinkNode* node = newArrayRef->header;
    while (node&&node!=newArrayRef->tail) {
        node = node->next;
//        lh_arrayAppentValue(array, node->value);
    }
    
    return newArray;
}