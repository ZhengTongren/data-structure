#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


typedef int SLTDataType;

typedef struct SLTNode
{
	SLTDataType data;
	struct SLTNode* next;
} SLTNode;


void SLTPrint(SLTNode* phead);

//void SLTInit(SLTNode* phead);

SLTNode* BuySListNode(SLTDataType x);

//void SLTPushFront(SLTNode* phead, SLTNode* newnode);

void SLTPushBack(SLTNode** pphead, SLTDataType x);

void SLTPushFront(SLTNode** pphead, SLTDataType x);

void SLTPopBack(SLTNode** pphead);

void SLTPopFront(SLTNode** pphead);

SLTNode* SLTFind(SLTNode* phead, SLTDataType x);

void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x);

void SLTInsertAfter(SLTNode* pos, SLTDataType x);

void SLTErase(SLTNode** pphead, SLTNode* pos);

void SLTEraseAfter(SLTNode* pos);