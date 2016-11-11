//
//  BFArray.h
//  BFArrayRef
//
//  Created by friday on 16/11/10.
//  Copyright © 2016年 friday. All rights reserved.
//

#ifndef BFArray_h
#define BFArray_h

#include <stdio.h>
#include <MacTypes.h>
//链表实现数组
typedef unsigned int DWORD;
struct BF_LinkNode{
    struct BFLinkNode* prev;
    struct BFLinkNode* next;
    void* value;
};


struct BFArray{
    DWORD count;//
    struct BF_LinkNode *header;
    struct BF_LinkNode *tail;
};

typedef struct BFArray BFArrayRef;
typedef struct BF_LinkNode BFLinkNode;
/**
 * @dis 创建数组
 */
BFArrayRef BFArrayCreate();
/**
 *  @dis 创建数组
 *  @para 原数组
 *  @return 返回新数组
 */
BFArrayRef BFArrayCreateWithArray(BFArrayRef *array);


#endif /* BFArray_h */
