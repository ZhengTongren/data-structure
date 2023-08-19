//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <stdbool.h>
//
//typedef int QDataType;
//
//typedef struct QueueNode
//{
//	QDataType data;
//	struct QueueNode* next;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//	int size;
//}Que;
//
//
//void QueueInit(Que* pq);
//void QueueDestroy(Que* pq);
//
//void QueuePush(Que* pq, QDataType x);
//void QueuePop(Que* pq);
//
//QDataType QueueFront(Que* pq);
//QDataType QueueBack(Que* pq);
//
//bool QueueEmpty(Que* pq);
//int QueueSize(Que* pq);
//
//void QueueInit(Que* pq)
//{
//	assert(pq);
//
//	pq->size = 0;
//	pq->head = pq->tail = NULL;
//}
//
//
//void QueueDestroy(Que* pq)
//{
//	assert(pq);
//
//	QNode* cur = pq->head;
//
//	while (cur)
//	{
//		QNode* next = cur->next;
//
//		cur->next = NULL;
//		free(cur);
//		cur = next;
//	}
//	pq->head = pq->tail = NULL;
//	pq->size = 0;
//}
//
//
//void QueuePush(Que* pq, QDataType x)
//{
//	assert(pq);
//	QNode* tmp = (QNode*)malloc(sizeof(QNode));
//	if (tmp == NULL)
//	{
//		perror("malloc");
//		exit(-1);
//	}
//	tmp->data = x;
//	tmp->next = NULL;
//
//	if (pq->tail == NULL)
//	{
//		pq->head = pq->tail = tmp;
//	}
//	else
//	{
//		pq->tail->next = tmp;
//		pq->tail = pq->tail->next;
//	}
//	pq->size++;
//}
//
//
//void QueuePop(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* next = pq->head->next;
//		free(pq->head);
//		pq->head = next;
//	}
//	pq->size--;
//}
//
//
//bool QueueEmpty(Que* pq)
//{
//	assert(pq);
//
//	return pq->size == 0;
//}
//
//
//int QueueSize(Que* pq)
//{
//	assert(pq);
//
//	return pq->size;
//}
//
//
//QDataType QueueFront(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->data;
//}
//
//
//QDataType QueueBack(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->data;
//}
//
//
//typedef struct {
//	Que q1;
//	Que q2;
//
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&obj->q1);
//	QueueInit(&obj->q2);
//
//	return obj;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1, x);
//	}
//	else
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	Que* empty = &obj->q1;
//	Que* unEmpty = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		unEmpty = &obj->q1;
//		empty = &obj->q2;
//	}
//
//	while (QueueSize(unEmpty) > 1)
//	{
//		QueuePush(empty, QueueFront(unEmpty));
//		QueuePop(unEmpty);
//	}
//
//	int front = QueueFront(unEmpty);
//	QueuePop(unEmpty);
//	return front;
//}
//
//int myStackTop(MyStack* obj) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&obj->q1);
//	}
//	else
//	{
//		return QueueBack(&obj->q2);
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	/*free(&obj->q1);
//	free(&obj->q2);*/
//	// err
//	free(obj);
//	// obj = NULL;
//}
//
//int main()
//{
//	return 0;
//}


//typedef int QDataType;
//
//typedef struct QueueNode
//{
//	QDataType data;
//	struct QueueNode* next;
//}QNode;
//
//typedef struct Queue
//{
//	QNode* head;
//	QNode* tail;
//	int size;
//}Que;
//
//
//void QueueInit(Que* pq);
//void QueueDestroy(Que* pq);
//
//void QueuePush(Que* pq, QDataType x);
//void QueuePop(Que* pq);
//
//QDataType QueueFront(Que* pq);
//QDataType QueueBack(Que* pq);
//
//bool QueueEmpty(Que* pq);
//int QueueSize(Que* pq);
//
//void QueueInit(Que* pq)
//{
//	assert(pq);
//
//	pq->size = 0;
//	pq->head = pq->tail = NULL;
//}
//
//
//void QueueDestroy(Que* pq)
//{
//	assert(pq);
//
//	QNode* cur = pq->head;
//
//	while (cur)
//	{
//		QNode* next = cur->next;
//
//		cur->next = NULL;
//		free(cur);
//		cur = next;
//	}
//	pq->head = pq->tail = NULL;
//	pq->size = 0;
//}
//
//
//void QueuePush(Que* pq, QDataType x)
//{
//	assert(pq);
//	QNode* tmp = (QNode*)malloc(sizeof(QNode));
//	if (tmp == NULL)
//	{
//		perror("malloc");
//		exit(-1);
//	}
//	tmp->data = x;
//	tmp->next = NULL;
//
//	if (pq->tail == NULL)
//	{
//		pq->head = pq->tail = tmp;
//	}
//	else
//	{
//		pq->tail->next = tmp;
//		pq->tail = pq->tail->next;
//	}
//	pq->size++;
//}
//
//
//void QueuePop(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* next = pq->head->next;
//		free(pq->head);
//		pq->head = next;
//	}
//	pq->size--;
//}
//
//
//bool QueueEmpty(Que* pq)
//{
//	assert(pq);
//
//	return pq->size == 0;
//}
//
//
//int QueueSize(Que* pq)
//{
//	assert(pq);
//
//	return pq->size;
//}
//
//
//QDataType QueueFront(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->data;
//}
//
//
//QDataType QueueBack(Que* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->data;
//}
//
//
//typedef struct {
//	Que q1;
//	Que q2;
//
//} MyStack;
//
//
//MyStack* myStackCreate() {
//	MyStack* obj = (MyStack*)malloc(sizeof(MyStack));
//	QueueInit(&obj->q1);
//	QueueInit(&obj->q2);
//
//	return obj;
//}
//
//void myStackPush(MyStack* obj, int x) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		QueuePush(&obj->q1, x);
//	}
//	else
//	{
//		QueuePush(&obj->q2, x);
//	}
//}
//
//int myStackPop(MyStack* obj) {
//	Que* empty = &obj->q1;
//	Que* unEmpty = &obj->q2;
//	if (!QueueEmpty(&obj->q1))
//	{
//		unEmpty = &obj->q1;
//		empty = &obj->q2;
//	}
//
//	while (QueueSize(unEmpty) > 1)
//	{
//		QueuePush(empty, QueueFront(unEmpty));
//		QueuePop(unEmpty);
//	}
//
//	int front = QueueFront(unEmpty);
//	QueuePop(unEmpty);
//	return front;
//}
//
//int myStackTop(MyStack* obj) {
//	if (!QueueEmpty(&obj->q1))
//	{
//		return QueueBack(&obj->q1);
//	}
//	else
//	{
//		return QueueBack(&obj->q2);
//	}
//}
//
//bool myStackEmpty(MyStack* obj) {
//	return QueueEmpty(&obj->q1) && QueueEmpty(&obj->q2);
//}
//
//void myStackFree(MyStack* obj) {
//	QueueDestroy(&obj->q1);
//	QueueDestroy(&obj->q2);
//	free(obj);
//	// obj = NULL;
//}