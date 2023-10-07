#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}


void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}


void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}


void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;

	while (begin < end)
	{
		int mini = begin, maxi = begin;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] > a[maxi])
			{
				maxi = i;
			}
			if (a[i] < a[mini])
			{
				mini = i;
			}
		}
		Swap(&a[begin], &a[mini]);
		if (maxi == begin)
		{
			maxi = mini;
		}
		Swap(&a[end], &a[maxi]);
		++begin;
		--end;
	}
}


void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
			}
		}
	}
}


void AdjustDown(int* a, int n, int parent)
{
	assert(a);

	int child = parent * 2 + 1;
	while (child < n)
	{
		// 找到最小的孩子，防止数组越界访问
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}

		if (a[parent] < a[child])
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


void HeapSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
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


// 三数取中
int GetMidi(int* a, int left, int right)
{
	int mid = (left + right) / 2;
	if (a[left] < a[right])
	{
		if (a[mid] < a[right])
		{
			return mid;
		}
		else if (a[mid] > a[right])
		{
			return right;
		}
		else
		{
			return left;
		}
	}
	else  // a[left] > a[right]
	{
		if (a[mid] < a[left])
		{
			return mid;
		}
		else if (a[mid] > a[left])
		{
			return left;
		}
		else
		{
			return right;
		}
	}
}


int PartSort1(int* a, int left, int right)
{
	int midi = GetMidi(a, left, right);
	Swap(&a[midi], &a[left]);

	int keyi = left;
	while (left < right)
	{
		// 找小
		while (left < right && a[right] >= a[keyi])
		{
			--right;
		}
		// 找大
		while (left < right && a[left] <= a[keyi])
		{
			++left;
		}
		Swap(&a[left], &a[right]);
	}
	Swap(&a[keyi], &a[left]);
	return left;
}


int PartSort2(int* a, int left, int right)
{
	int midi = GetMidi(a, left, right);
	Swap(&a[midi], &a[left]);

	int key = a[left];
	// 坑位
	int keyi = left;
	while (left < right)
	{
		// 找小
		while (left < right && a[right] >= key)
		{
			--right;
		}
		if (a[right] < key)
		{
			Swap(&a[right], &a[keyi]);
			keyi = right;
		}
		// 找大
		while (left < right && a[left] <= key)
		{
			++left;
		}
		if (a[left] > key)
		{
			Swap(&a[left], &a[keyi]);
			keyi = left;
		}
	}
	a[keyi] = key;

	return keyi;
}


//int PartSort3(int* a, int left, int right)
//{
//	int prev = left;
//	int cur = prev + 1;
//	//int cur = left;
//	int keyi = left;
//	//int key = a[left];
//
//	while (cur <= right)
//	{
//		/*++cur;
//		if (a[cur] < key)
//		{
//			++prev;
//			Swap(&a[prev], &a[cur]);
//		}*/
//		if (a[cur] < a[keyi])
//		{
//			++prev;
//			if (prev != cur)
//			{
//				Swap(&a[prev], &a[cur]);
//			}
//		}
//		++cur;
//	}
//	Swap(&a[keyi], &a[prev]);
//}


int PartSort3(int* a, int left, int right)
{
	int midi = GetMidi(a, left, right);
	Swap(&a[midi], &a[left]);

	int prev = left;
	int cur = prev + 1;
	int keyi = left;

	while (cur <= right)
	{
		// 找小
		if (a[cur] < a[keyi])
		{
			++prev;
			if (prev != cur)
			{
				Swap(&a[prev], &a[cur]);
			}
		}
		++cur;
	}
	Swap(&a[keyi], &a[prev]);

	return prev;
}


void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;

	int keyi = PartSort3(a, left, right);
	// [left, keyi - 1] keyi [keyi + 1, right]
	QuickSort(a, left, keyi - 1);
	QuickSort(a, keyi + 1, right);
}