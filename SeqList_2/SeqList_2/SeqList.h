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

// ˳����ʼ��
void SLInit(SL* ps);

// ˳�������
void SLDestroy(SL* ps);

// �� ɾ �� ��
void SLInsert(SL* ps, int pos, SLDataType x);

void SLErase(SL* ps, int pos);

int SLFind(SL* ps, SLDataType x);

void SLModify(SL* ps, int pos, SLDataType x);

void SLPrint(SL* ps);