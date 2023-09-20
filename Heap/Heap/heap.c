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
	assert(php->size > 0);

	return php->a[0];
}


bool HeapEmpty(HP* php)
{
	assert(php);

	return php->size == 0;
}


void HeapSort(HPDataType* a, int n)
{
	assert(a);

	// 建堆; 排升序 建大堆
	for (int i = 0; i < n; i++)
	{
		AdjustUp(a, i);
	}

	int end = n - 1;
	while (end)
	{
		Swap(&a[0], &a[end]);
		// 对前 end 个数据进行向下调整
		AdjustDown(a, end, 0);
		end--;
	}
}


void CreateNData()
{
	int n = 100;
	FILE* fout = fopen("data.txt", "w");

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		int x = (rand() + i) % 30;
		fprintf(fout, "%d\n", x);
	}
	fclose(fout);
}


void PrintTopK(const char* filename, int k)
{
	assert(filename);

	FILE* fout = fopen("data.txt", "r");
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