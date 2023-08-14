#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"


void test()
{
	ST s1;
	STInit(&s1);

	STPushBack(&s1, 10);
	STPushBack(&s1, 20);
	STPushBack(&s1, 30);
	STPushBack(&s1, 40);
	STPushBack(&s1, 50);
	STPrint(&s1);

	STPopBack(&s1);
	STPrint(&s1);
	
	STPopBack(&s1);
	STPopBack(&s1);
	STPrint(&s1);
	STPopBack(&s1);
	STPrint(&s1);


	STDestroy(&s1);
}

int main()
{
	test();
	return 0;
}