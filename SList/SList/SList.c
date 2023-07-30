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


SLTNode* SLTFind(SLTNode* phead, SLTDataType x)
{
	SLTNode* cur = phead;
	while (cur->data != x)
	{
		cur = cur->next;
	}
	return cur;
}


void SLTInsert(SLTNode** pphead, SLTNode* pos, SLTDataType x)
{
	assert(*pphead);
	//在开头插入
	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		//在中间插入
		SLTNode* newnode = BuySListNode(x);
		SLTNode* cur = *pphead;
		while (cur->next != pos)
		{
			cur = cur->next;
		}
		newnode->next = pos;
		cur->next = newnode;
	}
}


void SLTInsertAfter(SLTNode* pos, SLTDataType x)
{
	SLTNode* posafter = pos->next;
	SLTNode* newnode = BuySListNode(x);

	newnode->next = posafter;
	pos->next = newnode;
}


void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	//头删
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		//删除中间链表
		SLTNode* posafter = pos->next;
		SLTNode* cur = *pphead;

		while (cur->next != pos)
		{
			cur = cur->next;
		}
		free(pos);
		pos = NULL;
		cur->next = posafter;
	}
}


void SLTEraseAfter(SLTNode* pos)
{
	assert(pos->next);
	SLTNode* cur = pos->next->next;
	free(pos->next);
	pos->next = NULL;
	pos->next = cur;
}