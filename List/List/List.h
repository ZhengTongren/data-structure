#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* prev;
	LTDataType data;
	struct ListNode* next;
}LTNode;


LTNode* LTInit();

LTNode* BuyLTNode(x);

void LTPushBack(LTNode* phead, LTDataType x);

void LTPrint(LTNode* phead);

void LTPopBack(LTNode* phead);

void LTPushFront(LTNode* phead, LTDataType x);

void LTPopFront(LTNode* phead);

int LTSize(LTNode* phead);
// 不应该用phead的data来存 size， 如果LTDataType 是char, double, struct ，那么程序将变得危险

void LTInsert(LTNode* pos, LTDataType x);

void LTErase( LTNode* pos);