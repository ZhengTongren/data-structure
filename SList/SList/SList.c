#define _CRT_SECURE_NO_WARNINGS 1


#include "SList.h"


//要不要断言 取决于它合不合理

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


//二级指针的目的 是对头指针进行修改
void SLTPushBack(SLTNode** pphead, SLTDataType x)
{
	assert(pphead);
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
	assert(pphead);
	SLTNode* newnode = BuySListNode(x);
	newnode->next = *pphead;
	*pphead = newnode;
}


void SLTPopBack(SLTNode** pphead)
{
	assert(pphead);//pphead 是 plist 的地址，正常情况下一定不为空
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
	assert(pphead);
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
	assert(pphead);
	assert(pos);
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
	assert(pos);//要断言什么 在于程序跟什么相关
	SLTNode* newnode = BuySListNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}


void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pos);
	//头删
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		//删除中间链表
		SLTNode* cur = *pphead;

		while (cur->next != pos)
		{
			cur = cur->next;
		}
		cur->next = pos->next;
		free(pos);
		pos = NULL;//对形参的改变不会影响实参，出于好习惯可以置空
	}
}


void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	//检查pos是否为尾节点
	assert(pos->next);
	SLTNode* cur = pos->next->next;
	pos->next = cur;
	free(pos->next);
	pos->next = NULL;
}


void SLTDestroy(SLTNode** pphead)
{
	assert(pphead);

	SLTNode* cur = *pphead;
	while (cur)
	{
		SLTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	//free(*pphead);
	*pphead = NULL;
}