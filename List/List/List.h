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
// ��Ӧ����phead��data���� size�� ���LTDataType ��char, double, struct ����ô���򽫱��Σ��

void LTInsert(LTNode* pos, LTDataType x);

void LTErase( LTNode* pos);