#define _CRT_SECURE_NO_WARNINGS 1

#include "List.h"


void test1()
{
//	LTNode* plist = NULL;
//	LTInit(plist);// 对形参的改变不会影响实参

	LTNode* plist = LTInit();
	LTPushBack(plist, 1);
	LTPushBack(plist, 2);
	LTPushBack(plist, 3);
	LTPushBack(plist, 4);
	LTPushBack(plist, 5);
	LTPrint(plist);

	LTPopBack(plist);
	LTPrint(plist);

	LTPushFront(plist, 10);
	LTPrint(plist);
	
	LTPopFront(plist);
	LTPrint(plist);
}


void test2()
{
	LTNode* plist = LTInit();
	//LTPushFront(plist, 10);
	LTPrint(plist);

	/*LTPopBack(plist);
	LTPrint(plist);*/

	LTPopFront(plist);
	LTPrint(plist);
}


void test3()
{
	LTNode* plist = LTInit();
	LTPushFront(plist, 10);
	LTPushFront(plist, 20);
	LTPushFront(plist, 30);
	LTPushFront(plist, 40);
	LTPushFront(plist, 50);
	LTPrint(plist);

	/*int sz = LTSize(plist);
	printf("%d\n", sz);*/

	/*LTPopFront(plist);
	LTPopBack(plist);*/
	LTPushFront(plist, 10);
	LTPushFront(plist, 20);
	LTPushFront(plist, 30);
	LTPushFront(plist, 40);
	LTPushFront(plist, 50);
	LTPrint(plist);

	//sz = LTSize(plist);
	//printf("%d\n", sz);
}

void test4()
{
	LTNode* plist = LTInit();
	//LTPushBack(plist, 10);
	/*LTPrint(plist);
	LTPushFront(plist, 20);
	LTPrint(plist);*/
	LTPushBack(plist, 10);
	LTPushBack(plist, 20);
	LTPushBack(plist, 30);
	LTPushBack(plist, 40);
	LTPushBack(plist, 50);
	LTPrint(plist);

	//LTPopBack(plist);
	LTPopFront(plist);
	LTPrint(plist);

}

int main()
{
	test4();
	return 0;
}