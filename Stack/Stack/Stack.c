#define _CRT_SECURE_NO_WARNINGS 1


#include "Stack.h"

void STInit(ST* ps)
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


void STDestroy(ST* ps)
{
	assert(ps);

	free(ps->arr);
	ps->capacity = 0;
	ps->size = 0;
}


void STCapacityCheck(ST* ps)
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


void STInsert(ST* ps, int pos, SLDataType x)
{
	assert(ps);

	STCapacityCheck(ps);

	for (int i = ps->size - 1; i >= pos; i--)
	{
		ps->arr[i + 1] = ps->arr[i];
	}
	ps->arr[pos] = x;
	ps->size++;
}


void STPrint(ST* ps)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n");
}


void STErase(ST* ps, int pos)
{
	assert(ps);

	for (int i = pos + 1; i < ps->size; i++)
	{
		ps->arr[i - 1] = ps->arr[i];
	}
	ps->size--;
}


int STFind(ST* ps, SLDataType x)
{
	assert(ps);

	for (int i = 0; i < ps->size; i++)
	{
		if (ps->arr[i] == x)
			return i;
	}
	// ҲҵԪ
	return -1;
}


void STModify(ST* ps, int pos, SLDataType x)
{
	assert(ps);

	ps->arr[pos] = x;
}



void STPushBack(ST* ps, SLDataType x)
{
	assert(ps);

	STInsert(ps, ps->size, x);
}


void STPopBack(ST* ps)
{
	assert(ps);

	STErase(ps, ps->size - 1);
}