#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//
//typedef struct {
//    int* a;
//    int front;
//    int rear;
//    int k;
//} MyCircularQueue;
//
//
//MyCircularQueue* myCircularQueueCreate(int k) {
//    MyCircularQueue* obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
//    obj->front = obj->rear = 0;
//    obj->k = k;
//    obj->a = (int*)malloc(sizeof(int) * (obj->k + 1));
//    return obj;
//}
//
//bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
//    return obj->front == obj->rear;
//}
//
//bool myCircularQueueIsFull(MyCircularQueue* obj) {
//    return (obj->rear + 1) % (obj->k + 1) == obj->front;
//}
//
//bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {
//    if (myCircularQueueIsFull(obj))
//        return false;
//    else
//    {
//        obj->a[obj->rear] = value;
//        obj->rear++;
//        obj->rear %= (obj->k + 1);
//        return true;
//    }
//}
//
//bool myCircularQueueDeQueue(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//        return false;
//    else
//    {
//        obj->front++;
//        obj->front %= (obj->k + 1);
//        return true;
//    }
//}
//
//int myCircularQueueFront(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//        return -1;
//    else
//        return obj->a[obj->front];
//}
//
//int myCircularQueueRear(MyCircularQueue* obj) {
//    if (myCircularQueueIsEmpty(obj))
//        return -1;
//    else
//        return obj->a[(obj->rear + obj->k) % (obj->k + 1)];
//    // 取队尾时 取rear下标的前一个元素
//    // 防止 数组越界的情况
//}
//
//
//
//void myCircularQueueFree(MyCircularQueue* obj) {
//    free(obj->a);
//    free(obj);
//}