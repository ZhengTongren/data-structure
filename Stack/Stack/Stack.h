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

// ��ʼ��
void STInit(ST* ps);

// ����
void STDestroy(ST* ps);

//  �� ɾ �� ��
void STInsert(ST* ps, int pos, SLDataType x);

void STErase(ST* ps, int pos);

int STFind(ST* ps, SLDataType x);

void STPrint(ST* ps);

// β��
void STPushBack(ST* ps, SLDataType x);

// βɾ
void STPopBack(ST* ps);
