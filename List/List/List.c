#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"


//void LTInit(struct ListNode* phead)
//{
//	phead = BuyLTNode(-1);
//	phead->next = phead;
//	phead->prev = phead;
//}


LTNode* LTInit()
{
	LTNode* phead = BuyLTNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}


LTNode* BuyLTNode(x)
{
	LTNode* node = (LTNode*)malloc(sizeof(LTNode));
	if (node == NULL)
	{
		perror("malloc");
		return NULL;
	}
	node->data = x;
	node->next = NULL;
	node->prev = NULL;
	return node;
}


void LTPushBack(LTNode* phead, LTDataType x)
{
	assert(phead);

	/*LTNode* tail = phead->prev;
	LTNode* newnode = BuyLTNode(x);

	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = phead;
	phead->prev = newnode;*/
	LTInsert(phead, x);
}


void LTPrint(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;

	printf("phead <=> ");
	while (cur != phead)
	{
		printf("%d <=> ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void LTPopBack(LTNode* phead)
{
	assert(phead);
	// ·ÀÖ¹Á´±íÊÇ¿ÕµÄ
	assert(phead->next != phead);

	//LTNode* tail = phead->prev;
	//LTNode* newtail = tail->prev;

	//phead->prev = newtail;
	//newtail->next = phead;

	//free(tail);
	LTErase(phead->prev);
}


void LTPushFront(LTNode* phead, LTDataType x)
{
	assert(phead);

	//LTNode* newnode = BuyLTNode(x);

	///*newnode->next = phead->next;
	//phead->next->prev = newnode;

	//phead->next = newnode;
	//newnode->prev = phead;*/
	//LTNode* first = phead->next;

	//phead->next = newnode;
	//newnode->prev = phead;

	//newnode->next = first;
	//first->prev = newnode;

	LTInsert(phead->next, x);
}


void LTPopFront(LTNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	/*LTNode* del = phead->next;

	del->next->prev = phead;
	phead->next = del->next;
	free(del);*/


	//LTNode* first = phead->next;
	//LTNode* second = first->next;

	//phead->next = second;
	//second->prev = phead;
	//free(first);
	LTErase(phead->next);
}


int LTSize(LTNode* phead)
{
	int size = 0;
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		size++;
		cur = cur->next;
	}
	return size;
}


void LTInsert(LTNode* pos, LTDataType x)
{
	assert(pos);

	LTNode* newnode = BuyLTNode(x);
	LTNode* posPrev = pos->prev;

	posPrev->next = newnode;
	newnode->prev = posPrev;
	newnode->next = pos;
	pos->prev = newnode;
}


void LTErase(LTNode* pos)
{
	assert(pos);

	struct ListNode* posPrev = pos->prev;
	struct ListNode* posNext = pos->next;

	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
}


//err
//LTNode* LTFind(LTNode* phead, LTDataType x)
//{
//	assert(phead);
//	LTNode* cur = phead->next;
//	while (cur->data != x)
//	{
//		cur = cur->next;
//	}
//	return cur;
//}


LTNode* LTFind(LTNode* phead, LTDataType x)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		cur = cur->next;
	}
	return NULL;
}


void LTDestroy(LTNode* phead)
{
	assert(phead);
	LTNode* cur = phead->next;
	while (cur != phead)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
}