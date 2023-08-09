#define _CRT_SECURE_NO_WARNINGS 1

//#include "Stack.h"
//
//
//void test()
//{
//	ST a;
//	STInit(&a);
//
//	STPush(&a, 10);
//	STPush(&a, 20);
//	STPush(&a, 30);
//	STPush(&a, 40);
//	STPush(&a, 50);
//	while (STSize(&a))
//	{
//		printf("%d ", STTop(&a));
//		STPop(&a);
//	}
//	STDestroy(&a);
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


#include "Queue.h"



void test()
{
	Que q;
	QueueInit(&q);

	QueuePush(&q, 10);
	QueuePush(&q, 20);
	QueuePush(&q, 30);
	QueuePush(&q, 40);
	QueuePush(&q, 50);


	while (!QueueEmpty(&q))
	{
		printf("%d ", QueueFront(&q));
		QueuePop(&q);
	}

	QueueDestroy(&q);
}

int main()
{
	test();
	return 0;
}