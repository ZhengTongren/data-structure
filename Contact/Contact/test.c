#define _CRT_SECURE_NO_WARNINGS 1

#include "Contact.h"

//int main()
//{
//	Contact s1;
//	ConInit(&s1);
//	ConPushBack(&s1);
//	ConPushBack(&s1);
//	/*ConPushBack(&s1);
//	ConPushBack(&s1);
//	ConPushBack(&s1);*/
//
//	ConPrint(&s1);
//	//ConErase(&s1);
//	ConModify(&s1);
//	ConPrint(&s1);
//
//	return 0;
//}


void menu1()
{
	printf("------------------------------------\n");
	printf("   1. ������ϵ��    2. ɾ����ϵ��   \n");
	printf("   3. �޸���ϵ��    4. ��ʾ��ϵ��   \n");
	printf("   0. �˳�\n");
	printf("------------------------------------\n");
}


void test()
{
	Contact s1;
	ConInit(&s1);
	int input1 = 0;
	do
	{
		menu1();
		scanf("%d", &input1);
		switch (input1)
		{
		case 1:
			ConPushBack(&s1);
			break;
		case 2:
			ConErase(&s1);
			break;
		case 3:
			ConModify(&s1);
			break;
		case 4:
			ConPrint(&s1);
			break;
		case 0:
			break;
		default:
			printf("�����������������;>");
			break;
		} 
	} while (input1);

	ConDestroy(&s1);
}


int main()
{
	test();
	return 0;
}