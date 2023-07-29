#define _CRT_SECURE_NO_WARNINGS 1


#include "SList.h"


void SLTPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}



//void SLTInit(SLTNode* phead)
//{
//	phead->data = 0;
//	phead->next = NULL;
//}



SLTNode* BuySListNode(SLTDataType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


//
//void SLTPushFront(SLTNode* phead, SLTNode* newnode)
//{
//	assert(phead);
//	assert(newnode);
//
//	newnode->next = phead;
//	phead = newnode;
//}



void SLTPushBack(SLTNode* phead, SLTDataType x)
{
	//assert(phead);
	SLTNode* newnode = BuySListNode(x);
	SLTNode* tail = phead;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newnode;

}