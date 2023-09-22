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


//void AdjustUp(HPDataType* a, int child)
//{
//	assert(a);
//
//	while (child > 0)
//	{
//		int parent = (child - 1) / 2;
//		if (a[child] < a[parent])
//		{
//			Swap(&a[child], &a[parent]);
//			child = parent;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//


void AdjustUp(HPDataType* a, int child)
{
	assert(a);

	while (child > 0)
	{
		int parent = (child - 1) / 2;
		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
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


void AdjustDown(HPDataType* a, int n, int parent)
{
	assert(a);

	int child = parent * 2 + 1;
	while (child > n)
	{
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}

		if (a[parent] > a[child])
		{
			Swap(&a[parent], &a[child]);
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


//void HeapSort(HPDataType* a, int n)
//{
//	// 建堆
//	//for (int i = 0; i < n; i++)
//	//{
//	//	// 排升序建大堆 排降序建小堆
//	//	AdjustUp(a, i);
//	//}
//
//	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(a, n, i);
//	}
//
//	int end = n - 1;
//	while (end > 0)
//	{
//		// 大堆建好 a[0]最大，堆顶向后调整，剩余数据向下调整
//		Swap(&a[0], &a[end]);
//		AdjustDown(a, end, 0);
//		end--;
//	}
//}


void HeapSort(HPDataType* a, int n)
{
	assert(a);

	for (int i = 0; i < n; i++)
	{
		AdjustDown(a, n, i);
	}

	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

//
//void PrintTopK(const char* filename, int k)
//{
//	FILE* fout = fopen(filename, "r");
//	if (fout == NULL)
//	{
//		perror("fopen");
//		exit(-1);
//	}
//
//	int* minheap = (int*)malloc(sizeof(int) * k);
//	if (minheap == NULL)
//	{
//		perror("malloc");
//		exit(-1);
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		fscanf(fout, "%d", &minheap[i]);
//	}
//
//	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(minheap, k, i);
//	}
//
//	//for (int i = )
//	int x = 0;
//	while (fscanf(fout, "%d", &x) != EOF)
//	{
//		if (x > minheap[0])
//		{
//			minheap[0] = x;
//			AdjustDown(minheap, k, 0);
//		}
//	}
//
//	for (int i = 0; i < k; i++)
//	{
//		printf("%d\n", minheap[i]);
//	}
//}


//void HeapSort(HPDataType* a, int n)
//{
//	// 建堆
//	for (int i = 0; i < n; i++)
//	{
//		AdjustDown(a, n, i);
//	}
//
//	int end = n - 1;
//	while (end)
//	{
//		AdjustDown(a, n, end);
//	}
//}



void PrintTopK(const char* filename, int k)
{
	FILE* fout = fopen(filename, "r");
	if (fout == NULL)
	{
		perror("fopen");
		exit(-1);
	}

	int* minheap = (int*)malloc(sizeof(int) * k);
	if (minheap == NULL)
	{
		perror("malloc");
		exit(-1);
	}

	for (int i = 0; i < k; i++)
	{
		fscanf(fout, "%d", &minheap[i]);
	}

	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(minheap, k, i);
	}

	//for (int i = )
	int x = 0;
	while (fscanf(fout, "%d", &x) != EOF)
	{
		if (x > minheap[0])
		{
			minheap[0] = x;
			AdjustDown(minheap, k, 0);
		}
	}

	for (int i = 0; i < k; i++)
	{
		printf("%d\n", minheap[i]);
	}
}

void CreateData()
{
	int n = 1000;
	srand(time(NULL));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");

	if (fin == NULL)
	{
		perror("fopen");
		exit(-1);
	}

	for (int i = 0; i < n; i++)
	{
		int x = rand() % 100 + i;
		fprintf(fin, "%d\n", x);
	}
	fclose(fin);
}

