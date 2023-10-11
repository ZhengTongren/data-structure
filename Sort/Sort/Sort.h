#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Stack.h"



void InsertSort(int* a, int n);
void ShellSort(int* a, int n);
void SelectSort(int* a, int n);
void BubbleSort(int* a, int n);
void HeapSort(int* a, int n);
void QuickSort(int* a, int left, int right);
void QuickSort1(int* a, int left, int right);
//void QuickSort2(int* a, int left, int right);
void QuickSortNonR(int* a, int begin, int end);
void MergeSort(int* a, int n);


void PrintArray(int* a, int n);