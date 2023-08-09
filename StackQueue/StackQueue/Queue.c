#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"



void QueueInit(Que* pq)
{
	assert(pq);

	pq->size = 0;
	pq->head = pq->tail = NULL;
}


void QueueDestroy(Que* pq)
{
	assert(pq);

	QNode* cur = pq->head;

	while (cur)
	{
		QNode* next = cur->next;

		cur->next = NULL;
		free(cur);
		cur = next;
	}
	pq->head = pq->tail = NULL;
	pq->size = 0;
}


void QueuePush(Que* pq, QDataType x)
{
	assert(pq);
	QNode* tmp = (QNode*)malloc(sizeof(QNode));
	if (tmp == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	tmp->data = x;
	tmp->next = NULL;

	if (pq->tail == NULL)
	{
		pq->head = pq->tail = tmp;
	}
	else
	{
		pq->tail->next = tmp;
		pq->tail = pq->tail->next;
	}
	pq->size++;
}


void QueuePop(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	if (pq->head->next == NULL)
	{
		free(pq->head);
		pq->head = pq->tail = NULL;
	}
	else
	{
		QNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	pq->size--;
}


bool QueueEmpty(Que* pq)
{
	assert(pq);

	return pq->size == 0;
}


int QueueSize(Que* pq)
{
	assert(pq);
	 
	return pq->size;
}


QDataType QueueFront(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->head->data;
}


QDataType QueueBack(Que* pq)
{
	assert(pq);
	assert(!QueueEmpty(pq));

	return pq->tail->data;
}