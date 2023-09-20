#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>


typedef int HPDataType;

typedef struct Heap
{
	HPDataType* a;
	int size;
	int capacity;
}HP;


void HeapInit(HP* php);
void HeapDestroy(HP* php);

void Swap(HPDataType* p1, HPDataType* p2);

void AdjustUp(HPDataType* a, int child);
void AdjustDown(HPDataType* a, int n, int parent);

void HeapPush(HP* php, HPDataType x);
void HeapPop(HP* php);

void HeapPrint(HP* php);
HPDataType HeapTop(HP* php);
bool HeapEmpty(HP* php);

void HeapSort(HPDataType* a, int n);
void CreateNData();
void PrintTopK(const char* filename, int k);