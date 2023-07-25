#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"



void SLInit(SL* ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * CapcityDefault);
	if (ps->a == NULL)
	{
		perror("malloc");
		exit(-1);
	}
	ps->sz = 0;
	ps->capacity = CapcityDefault;
}



void SLDestroy(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->sz = 0;
}


void SLCheckCapacity(SL* ps)
{
	if (ps->sz == ps->capacity)
	{
		SLDataType* tmp = (SLDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity *= 2;
		//printf("扩容成功\n");
	}
}


void SLPushBack(SL* ps, SLDataType x)
{
	SLCheckCapacity(ps);

	ps->a[ps->sz] = x;
	ps->sz++;
}



void SLPrint(const SL* ps)
{
	for (int i = 0; i < ps->sz; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



void SLPopBack(SL* ps)
{
	//暴力检查
	assert(ps->sz > 0);//断言

	ps->sz--;
}



void SLPushFront(SL* ps, SLDataType x)
{
	SLCheckCapacity(ps);

	int end = ps->sz - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[0] = x;
	ps->sz++;
}



void SLPopFront(SL* ps)
{
	assert(ps->sz > 0);

	for (int i = 1; i < ps->sz; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->sz--;
}



void SLInsert(SL* ps, int pos, SLDataType x)
{
	SLCheckCapacity(ps);
	
	int end = ps->sz;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}

	ps->a[pos] = x;
	ps->sz++;
}



void SLErase(SL* ps, int pos)
{
	for (int i = pos + 1; i < ps->sz; i++)
	{
		ps->a[i - 1] = ps->a[i];
	}
	ps->sz--;
}
