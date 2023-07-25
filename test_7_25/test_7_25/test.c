#define _CRT_SECURE_NO_WARNINGS 1


#include "SeqList.h"


void TestSeqList1()
{
	SL x1;
	SLInit(&x1);

	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);
	SLPushBack(&x1, 1);

	SLPrint(&x1);

	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPopBack(&x1);
	SLPrint(&x1);



	SLDestroy(&x1);
}

void TestSeqList2()
{
	SL x2;
	SLInit(&x2);

	SLPushBack(&x2, 1);
	SLPushBack(&x2, 2);
	SLPushBack(&x2, 3);
	SLPushBack(&x2, 4);
	SLPushBack(&x2, 5);
	SLPushBack(&x2, 6);
	SLPushBack(&x2, 7);
	SLPrint(&x2);

	SLPushFront(&x2, 10);
	SLPushFront(&x2, 20);
	SLPushFront(&x2, 30);
	SLPushFront(&x2, 40);
	SLPrint(&x2);

	SLPopFront(&x2);
	SLPopFront(&x2);
	SLPrint(&x2);

	SLDestroy(&x2);
}

int main()
{
	TestSeqList2();
	return 0;
}
