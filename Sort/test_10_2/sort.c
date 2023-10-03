#define _CRT_SECURE_NO_WARNINGS 1


#include "sort.h"

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


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


//void ShellSort(int* a, int n)
//{
//	int gap = 3;
//	
//	for (int i = 0; i < gap; i++)
//	{
//		for (int j = i; j < n - gap; j += gap)
//		{
//			if (a[j] > a[j + gap])
//			{
//				Swap(&a[j], &a[j + gap]);
//			}
//		}
//	}
//}

//
//void ShellSort(int* a, int n)
//{
//	/*int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;*/
//	//int gap = 3;
//
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		for (int j = 0; j < gap; j++)
//		{
//			for (int i = j; i < n - gap; i += gap)
//			{
//				int end = i;
//				int tmp = a[end + gap];
//				while (end >= 0)
//				{
//					if (a[end] > tmp)
//					{
//						a[end + gap] = a[end];
//						end -= gap;
//					}
//					else
//					{
//						break;
//					}
//				}
//				a[end + gap] = tmp;
//			}
//
//		}
//	}
//	
//	//}
//	
//}


//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//
//		/*for (int i = 0; i < gap; i++)
//		{*/
//		for (int j = 0; j < n - gap; j++)
//		{
//			int end = j;
//			int tmp = a[end + gap];
//
//			while (end >= 0)
//			{
//				if (a[end] > tmp)
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	}
//	
//}


//void ShellSort(int* a, int n)
//{
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		/*for (int j = 0; j < gap; j++)
//		{*/
//			for (int i = 0; i < n - gap; i++)
//			{
//				int end = i;
//				int tmp = a[end + gap];
//				while (end >= 0)
//				{
//					if (a[end] > tmp)
//					{
//						a[end + gap] = a[end];
//						end -= gap;
//					}
//					else
//					{
//						break;
//					}
//				}
//				a[end + gap] = tmp;
//			}
//		//}
//	}
//	
//}


void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		//gap /= 3 + 1; // err
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


//void SelectSort(int* a, int n)
//{
//	int begin = 0, end = n - 1;
//	while (begin < end)
//	{
//		int mini = begin, maxi = begin;
//		for (int i = begin + 1; i <= end; i++)
//		{
//			if (a[i] > a[maxi])
//			{
//				maxi = i;
//			}
//			if (a[i] < a[mini])
//			{
//				mini = i;
//			}
//		}
//		Swap(&a[begin], &a[mini]);
//		if (maxi == begin)
//		{
//			maxi = mini;
//		}
//		Swap(&a[end], &a[maxi]);
//
//		begin++;
//		end--;
//	}
//	
//}


void SelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;

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


void PrintArray(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}