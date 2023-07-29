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


void SLTPushBack(SLTNode* phead, SLTDataType x);