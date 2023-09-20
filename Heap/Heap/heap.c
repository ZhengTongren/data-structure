#define _CRT_SECURE_NO_WARNINGS 1

#include "heap.h"


void HeapInit(HP* php)
{
	assert(php);

	php->a = NULL;
	php->size = php->capacity = 0;
}


void HeapDestroy(HP* php)
{
	assert(php);

	free(php->a);
	php->size = php->capacity = 0;
}


void Swap(HPDataType* p1, HPDataType* p2)
{
	HPDataType tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}


void AdjustUp(HPDataType* a, int child)
{
	assert(a);

	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			// 换到根就终止
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}


void HeapPush(HP* php, HPDataType x)
{
	assert(php);

	// 扩容
	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		php->a = tmp;
		php->capacity = newCapacity;
	}

	php->a[php->size] = x;
	php->size++;

	AdjustUp(php->a, php->size - 1);
}


void HeapPrint(HP* php)
{
	assert(php);

	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->a[i]);
	}
	printf("\n");
}


//void AdjustDown(HPDataType* a, int n, int parent)
//{
//	assert(a);
//
//	int child = parent * 2 + 1;
//	while ()
//	{
//		if (child + 1 < n && a[child + 1] < a[child])
//		{
//			child++;
//		}
//
//		if (a[parent] > a[child])
//		{
//			Swap(&a[parent], &a[child]);
//
//		}
//	}
//}


//void HeapPop(HP* php)
//{
//	assert(php);
//	assert(php->size > 0);
//
//	Swap(&php->a[0], &php->a[php->size - 1]);
//	php->size--;
//
//	AdjustDown(php->a, php->size, 0);
//}


void AdjustDown(HPDataType* a, int n, int parent)
{
	assert(a);

	int child = parent * 2 + 1;
	while (child < n)
	{
		// 找到最小的孩子，防止数组越界访问
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
			// 换到叶子就终止
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}


void HeapPop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	Swap(&php->a[0], &php->a[php->size - 1]);
	php->size--;

	AdjustDown(php->a, php->size, 0);
}


HPDataType HeapTop(HP* php)
{
	assert(php);

	return php->a[0];
}