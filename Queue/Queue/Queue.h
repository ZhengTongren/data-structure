#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


typedef int QDataType;

typedef struct QueueNode
{
	QDataType* data;
	int capacity;
	int sz;
}Que;


void QueueInit(Que* pq);

void QueueDestroy(Que* pq);

void QueuePush(Que* pq, QDataType x);

void QueuePop(Que* pq);

int QueueSize(Que* pq);

bool QueueEmpty(Que* pq);

QDataType QueueFront(Que* pq);

QDataType QueueBack(Que* pq);