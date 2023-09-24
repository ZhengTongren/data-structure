#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

void QueueInit(Que* pq)
{
	assert(pq);

	pq->head = pq->tail = NULL;
	pq->size = 0;
}


void QueueDestroy(Que* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;
		free(cur);
		cur = next;
	}
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
		pq->tail = tmp;
	}
	pq->size++;
}


void QueuePrint(Que* pq)
{
	assert(pq);

	QNode* cur = pq->head;
	while (cur)
	{
		QNode* next = cur->next;

		printf("%d->", cur->data);
		cur = next;
	}
	printf("NULL\n");
}


void QueuePop(Que* pq)
{
	assert(pq);

	/*QNode* tmp = pq->head;

	pq->head = pq->head->next;
	free(tmp);*/
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


int QueueSize(Que* pq)
{
	assert(pq);

	return pq->size;
}


bool QueueEmpty(Que* pq)
{
	assert(pq);

	// 头为空，队列就空了
	return pq->head == NULL;
}


QDataType QueueFront(Que* pq)
{
	assert(pq);

	return pq->head->data;
}


QDataType QueueBack(Que* pq)
{
	assert(pq);

	return pq->tail->data;
}
