#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define DefaultCapacity 4


typedef int SLDataType;

typedef struct Stack
{
	SLDataType* arr;
	int size;
	int capacity;
}ST;

// 初始化
void STInit(ST* ps);

// 销毁
void STDestroy(ST* ps);

//  增 删 查 改
void STInsert(ST* ps, int pos, SLDataType x);

void STErase(ST* ps, int pos);

int STFind(ST* ps, SLDataType x);

void STPrint(ST* ps);

// 尾插
void STPushBack(ST* ps, SLDataType x);

// 尾删
void STPopBack(ST* ps);
