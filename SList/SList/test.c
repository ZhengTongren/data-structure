#define _CRT_SECURE_NO_WARNINGS 1


#include "SList.h"



void TestSList1()
{
	int n = 0;
	printf("����������ڵ����:");
	scanf("%d", &n);
	printf("\n����������ڵ��ֵ:");
	SLTNode* plist = NULL;


	//for (int i = 0; i < n; i++)
	//{
	//	int tmp = 0;
	//	scanf("%d", &tmp);
	//	SLTNode* newnode = BuySListNode(tmp);

	//	//ͷ��
	//	newnode->next = plist;
	//	plist = newnode;
	//}
	SLTPrint(plist);
	printf("\n");
	SLTPushBack(plist, 10000);
	SLTPrint(plist);

}



void TestSList2()
{
	SLTNode* plist = NULL;

	SLTPushBack(plist, 10);
	SLTPushBack(plist, 20);
	SLTPushBack(plist, 30);
	SLTPushBack(plist, 40);
	SLTPushBack(plist, 50);
	SLTPrint(plist);
}

int main()
{
	/*SLTNode s1;
	SLTInit(&s1);
	SLTPrint(&s1);*/

	TestSList1();




	return 0;
}