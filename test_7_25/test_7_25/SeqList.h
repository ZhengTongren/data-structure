#pragma once


#include <stdio.h>
#include <stdlib.h>

#define CapcityDefault 4

typedef int SLDataType;

// 动态顺序表
typedef struct SeqList
{
	SLDataType* a;
	int sz;
	int capacity;
}SL;


// 初始化
void SLInit(SL* ps);

// 销毁
void SLDestroy(SL* ps);

// 头插
void SLPushFront(SL* ps, SLDataType x);

// 头删
void SLPopFront(SL* ps);

// 尾插
void SLPushBack(SL* ps, SLDataType x);

// 尾删
void SLPopBack(SL* ps);

// 打印
void SLPrint(const SL* ps);