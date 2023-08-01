#define _CRT_SECURE_NO_WARNINGS 1


#include "SList.h"



void TestSList1()
{
	int n = 0;
	printf("请输入链表节点个数:");
	scanf("%d", &n);
	printf("\n请依次输入节点的值:");
	SLTNode* plist = NULL;


	//for (int i = 0; i < n; i++)
	//{
	//	int tmp = 0;
	//	scanf("%d", &tmp);
	//	SLTNode* newnode = BuySListNode(tmp);

	//	//头插
	//	newnode->next = plist;
	//	plist = newnode;
	//}
	SLTPrint(plist);
	printf("\n");
	SLTPushBack(&plist, 10000);
	SLTPrint(plist);

}



void TestSList2()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 10);
	SLTPushBack(&plist, 20);
	SLTPushBack(&plist, 30);
	SLTPushBack(&plist, 40);
	SLTPushBack(&plist, 50);
	SLTPrint(plist);

	/*SLTPushFront(&plist, 50);
	SLTPrint(plist);*/

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);

	SLTPopBack(&plist);
	SLTPrint(plist);
}


void TestSList3()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 10);
	SLTPushBack(&plist, 20);
	SLTPushBack(&plist, 30);
	SLTPushBack(&plist, 40);
	SLTPushBack(&plist, 50);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

	SLTPopFront(&plist);
	SLTPrint(plist);

}


void TestSList4()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 10);
	SLTPushBack(&plist, 20);
	SLTPushBack(&plist, 30);
	SLTPushBack(&plist, 40);
	SLTPushBack(&plist, 50);
	SLTPrint(plist);

	int x = 0;
	/*scanf("%d", &x);
	SLTNode* cur = SLTFind(plist, x);
	SLTInsert(&plist, cur, x * 10);
	SLTPrint(plist);*/

	scanf("%d", &x);
	SLTNode* cur = SLTFind(plist, x);
	if (cur)
	{
		SLTInsertAfter(cur, x * 10);
	}
	SLTPrint(plist);
	//printf("%p\n", cur);
}


void TestSList5()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 10);
	SLTPushBack(&plist, 20);
	SLTPushBack(&plist, 30);
	SLTPushBack(&plist, 40);
	SLTPushBack(&plist, 50);
	SLTPrint(plist);

	int x = 0;
	scanf("%d", &x);
	SLTNode* cur = SLTFind(plist, x);
	if (cur)
	{
		SLTEraseAfter(cur);
	}
	//SLTErase(&plist, cur);
	SLTPrint(plist);

}


void TestSList6()
{
	SLTNode* plist = NULL;

	SLTPushBack(&plist, 10);
	SLTPushBack(&plist, 20);
	SLTPushBack(&plist, 30);
	SLTPushBack(&plist, 40);
	SLTPushBack(&plist, 50);
	SLTPrint(plist);

	SLTDestroy(&plist);

}


int main()
{
	/*SLTNode s1;
	SLTInit(&s1);
	SLTPrint(&s1);*/

	TestSList6();




	return 0;
}