#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SLInit(SL* ps)
{
	assert(ps);

	SLDataType* tmp = (SLDataType*)malloc(sizeof(SLDataType) * DefaultCapacity);
	if (tmp == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	ps->arr = tmp;
	ps->capacity = DefaultCapacity;
	ps->size = 0;
}


void SLDestroy(SL* ps)
{
	assert(ps);

	free(ps->arr);
	ps->capacity = 0;
	ps->size = 0;
}


void SLCapacityCheck(SL* ps)
{
	assert(ps);

	if (ps->size == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, ps->capacity * 2 * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		ps->capacity *= 2;
		ps->arr = tmp;
	}
}


void SLInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);

	SLCapacityCheck(ps);

	for (int i = ps->size - 1; i >= pos; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[pos] = x;
	ps->size++;
}


void SLPrint(SL* ps)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}


void SLErase(SL* ps, int pos)
{
	assert(ps);

	for (int i = pos + 1; i < ps->size; i++)
	{
		ps->arr[i - 1] = ps->arr[i];
	}
	ps->size--;
}


int SLFind(SL* ps, SLDataType x)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
			return i;
	}
	// 找不到所查找的元素
	return -1;
}


void SLModify(SL* ps, int pos, SLDataType x)
{
	assert(ps);

	ps->arr[pos] = x;
}