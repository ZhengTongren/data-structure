#pragma once



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define CapcityDefault 4

typedef int SLDataType;

// ��̬˳���
typedef struct SeqList
{
	SLDataType* a;
	int sz;
	int capacity;
}SL;


// ��ʼ��
void SLInit(SL* ps);

// ����
void SLDestroy(SL* ps);

// ͷ��
void SLPushFront(SL* ps, SLDataType x);

// ͷɾ
void SLPopFront(SL* ps);

// β��
void SLPushBack(SL* ps, SLDataType x);

// βɾ
void SLPopBack(SL* ps);

// ��ӡ
void SLPrint(const SL* ps);

// ��posλ�ò���
void SLInsert(SL* ps, int pos, SLDataType x);

// ��posλ��ɾ��
void SLErase(SL* ps, int pos);


int SLFind(SL* ps, SLDataType x);


void SLModify(SL* ps, int pos, SLDataType x);