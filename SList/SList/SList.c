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



void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	//assert(phead);
	SLTNode* newnode = BuySListNode(x);

	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;

	}
	
}



void SLTPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}



void SLTPopBack(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* tail = *pphead;
	if (tail->next == NULL)
	{
		free(tail);
		*pphead = NULL;
	}
	else
	{
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}



void SLTPopFront(SLTNode** pphead)
{
	assert(*pphead);

	SLTNode* newhead = (*pphead)->next;
	free(*pphead);
	*pphead = newhead;
}
