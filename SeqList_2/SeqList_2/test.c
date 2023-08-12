#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void test1()
{
	SL s1;
	SLInit(&s1);

	SLInsert(&s1, 0, 10);
	SLInsert(&s1, 0, 20);
	SLInsert(&s1, 0, 30);
	SLInsert(&s1, 0, 40);
	SLInsert(&s1, 0, 50);

	SLPrint(&s1);

	SLErase(&s1, 5);
	SLErase(&s1, 1);
	SLPrint(&s1);

	SLDestroy(&s1);
}


void test2()
{
	SL s1;
	SLInit(&s1);
	SLInsert(&s1, 0, 10);
	SLInsert(&s1, 0, 20);
	SLInsert(&s1, 0, 30);
	SLInsert(&s1, 0, 40);
	SLInsert(&s1, 0, 50);
	SLPrint(&s1);

	int x = 0;
	scanf("%d", &x);
	int pos = SLFind(&s1, x);
	if (pos == -1)
		return;
	SLModify(&s1, pos, x * 10);
	SLPrint(&s1);

	SLDestroy(&s1);
}


int main()
{
	test2();
	return 0;
}