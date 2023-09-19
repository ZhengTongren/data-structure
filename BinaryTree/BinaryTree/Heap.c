#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void HeapInit(HP* php)
{
	assert(php);

	php->_a = NULL;
	php->size = 0;
	php->capacity = 0;
}


void HeapDestroy(HP* php)
{
	assert(php);

	free(php->_a);
	php->_a = NULL;
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
	
	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
			child = parent;
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

	if (php->size == php->capacity)
	{
		int newCapacity = php->capacity == 0 ? 4 : php->capacity * 2;
		HPDataType* tmp = (HPDataType*)realloc(php->_a, sizeof(HPDataType) * newCapacity);
		if (tmp == NULL)
		{
			perror("realloc");
			exit(-1);
		}
		php->_a = tmp;
		php->capacity = newCapacity;
	}

	php->_a[php->size] = x;
	php->size++;

	AdjustUp(php->_a, php->size - 1);
}


HPDataType HeapTop(HP* php)
{
	assert(php);
	assert(php->size > 0);

	return php->_a[0];
}


bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}


//void AdjustDown(HPDataType* a, int n, int parent)
//{
//	assert(a);
//
//	while (parent < n)
//	{
//		int child = parent * 2 + 1;
//		if (child + 1 < n && a[child] > a[child + 1])
//		{
//			child++;
//		}
//		if (a[child] > a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			parent = child;
//		}
//		else
//		{
//			break;
//		}
//	}
//}


void AdjustDown(HPDataType* a, int n, int parent)
{
	assert(a);

	int child = parent * 2 + 1;

	while (child < n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[child] < a[parent])
		{
			Swap(&a[child], &a[parent]);
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

	php->_a[0] = php->_a[php->size - 1];
	php->size--;

	AdjustDown(php->_a, php->size, 0);
}


void HeapPrint(HP* php)
{
	assert(php);
	for (int i = 0; i < php->size; i++)
	{
		printf("%d ", php->_a[i]);
	}
	printf("\n");
}


void HeapSort(HPDataType* a, int n)
{
	// ����
	//for (int i = 0; i < n; i++)
	//{
	//	// �����򽨴�� �Ž���С��
	//	AdjustUp(a, i);
	//}

	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		// ��ѽ��� a[0]��󣬶Ѷ���������ʣ���������µ���
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}