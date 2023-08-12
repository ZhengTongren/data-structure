#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DefaultCapacity 4


typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* arr;
	int size;
	int capacity;
}SL;

// 顺序表初始化
void SLInit(SL* ps);

// 顺序表销毁
void SLDestroy(SL* ps);

// 增 删 查 改
void SLInsert(SL* ps, int pos, SLDataType x);

void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);

void SLModify(SL* ps, int pos, SLDataType x);

void SLPrint(SL* ps);