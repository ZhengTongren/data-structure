#pragma once



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

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

// 在pos位置插入
void SLInsert(SL* ps, int pos, SLDataType x);

// 在pos位置删除
void SLErase(SL* ps, int pos);


int SLFind(SL* ps, SLDataType x);


void SLModify(SL* ps, int pos, SLDataType x);