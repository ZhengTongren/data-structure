#define _CRT_SECURE_NO_WARNINGS 1

#include "Queue.h"



void test1()
{
	Que q1;
	QueueInit(&q1);

	QueuePush(&q1, 10);
	QueuePush(&q1, 20);
	QueuePush(&q1, 30);
	QueuePush(&q1, 40);
	QueuePush(&q1, 50);
	QueuePrint(&q1);

	QueuePop(&q1);
	QueuePop(&q1);
	QueuePop(&q1);
	QueuePrint(&q1);

	QueueDestroy(&q1);
}


void test2()
{
	Que q1;
	QueueInit(&q1);

	QueuePush(&q1, 10);
	QueuePush(&q1, 20);
	QueuePush(&q1, 30);
	QueuePush(&q1, 40);
	QueuePush(&q1, 50);

	QueuePrint(&q1);

	//int size = QueueSize(&q1);
	//QueuePrint(&q1);
	printf("size = %d, front = %d, back = %d\n", QueueSize(&q1), QueueFront(&q1), QueueBack(&q1));

	while (!QueueEmpty(&q1))
	{
		QueuePop(&q1);
	}
	QueuePush(&q1, 1);
	QueuePush(&q1, 2);
	QueuePush(&q1, 3);
	QueuePush(&q1, 4);
	QueuePush(&q1, 5);
	QueuePrint(&q1);
	printf("size = %d, front = %d, back = %d\n", QueueSize(&q1), QueueFront(&q1), QueueBack(&q1));


	QueueDestroy(&q1);
}

int main()
{
	test2();
	return 0;
}