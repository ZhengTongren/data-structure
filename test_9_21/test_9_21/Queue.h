#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


typedef struct BinaryTreeNode* QDataType;

// Node ½Úµã
typedef struct QueueNode
{
	struct QueueNode* next;
	QDataType data;
}QNode;


typedef struct Queue
{
	QNode* head;
	QNode* tail;
	int size;
}Que;

// QueuePush(QNode* head, QNode* tail, QDataType x);

void QueueInit(Que* pq);

void QueueDestroy(Que* pq);

void QueuePush(Que* pq, QDataType x);

void QueuePop(Que* pq);

int QueueSize(Que* pq);

bool QueueEmpty(Que* pq);

QDataType QueueFront(Que* pq);

QDataType QueueBack(Que* pq);

void QueuePrint(Que* pq);