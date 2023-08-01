#define _CRT_SECURE_NO_WARNINGS 1


#include "SList.h"


//Ҫ��Ҫ���� ȡ�������ϲ�����

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


//����ָ���Ŀ�� �Ƕ�ͷָ������޸�
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
	assert(pphead);//pphead �� plist �ĵ�ַ�����������һ����Ϊ��
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
	//�ڿ�ͷ����
	if (pos == *pphead)
	{
		SLTPushFront(pphead, x);
	}
	else
	{
		//���м����
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
	assert(pos);//Ҫ����ʲô ���ڳ����ʲô���
	SLTNode* newnode = BuySListNode(x);

	newnode->next = pos->next;
	pos->next = newnode;
}


void SLTErase(SLTNode** pphead, SLTNode* pos)
{
	assert(pos);
	//ͷɾ
	if (pos == *pphead)
	{
		SLTPopFront(pphead);
	}
	else
	{
		//ɾ���м�����
		SLTNode* cur = *pphead;

		while (cur->next != pos)
		{
			cur = cur->next;
		}
		cur->next = pos->next;
		free(pos);
		pos = NULL;//���βεĸı䲻��Ӱ��ʵ�Σ����ں�ϰ�߿����ÿ�
	}
}


void SLTEraseAfter(SLTNode* pos)
{
	assert(pos);
	//���pos�Ƿ�Ϊβ�ڵ�
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