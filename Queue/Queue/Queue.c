#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"

void QueueInit(Que* pq)
{
	assert(pq);

	pq->data = NULL;
	pq->sz = 0;
	pq->capacity = 0;
}


void QueueDestroy(Que* pq)
{
	assert(pq);

	free(pq->data);
	pq->capacity = pq->sz = 0;
	free(pq);
}


void QueuePush(Que* pq, QDataType x)
{
	assert(pq);

	if (pq->sz == pq->capacity)
	{
		int newcapacity = pq->capacity > 0 ? pq->capacity * 2 : 4;
		QDataType* tmp = (QDataType*)realloc(pq->data, newcapacity);
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		pq->data = tmp;
		pq->capacity = newcapacity;
	}

}