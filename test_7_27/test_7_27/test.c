#define _CRT_SECURE_NO_WARNINGS 1

//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int end1 = m - 1, end2 = n - 1, end = n + m - 1;
//    while (end1 >= 0 && end2 >= 0)
//    {
//        if (nums1[end1] > nums2[end2])
//        {
//            nums1[end--] = nums1[end1--];
//        }
//        else
//        {
//            nums1[end--] = nums2[end2--];
//        }
//    }
//    while (end2 >= 0)
//    {
//        nums1[end--] = nums2[end2--];
//    }
//}

//
//#include <stdio.h>
//#include <assert.h>
//#include <stdlib.h>
//
//
//typedef int SLTDataType;
//
//typedef struct SListNode
//{
//	SLTDataType a;
//	struct SListNode* next;
//}SLTNode;
//
//
//void PrintSList(SLTNode* phead)
//{
//	assert(phead);
//	SLTNode* cur = phead;
//	while (cur->next != NULL)
//	{
//		printf("%d->", cur->a);
//		cur = cur->next;
//	}
//	printf("NULL\n");
//}
//
//int main()
//{
//	SLTNode* n1 = (SLTNode*)malloc(sizeof(SLTNode));
//	n1->a = 10;
//
//	SLTNode* n2 = (SLTNode*)malloc(sizeof(SLTNode));
//	n2->a = 20;
//
//	SLTNode* n3 = (SLTNode*)malloc(sizeof(SLTNode));
//	n3->a = 30;
//
//	SLTNode* n4 = (SLTNode*)malloc(sizeof(SLTNode));
//	n4->a = 40;
//
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = n4;
//	n4->next = NULL;
//
//	PrintSList(n1);
//	return 0;
//}
//

//
//
//int removeDuplicates(int* nums, int numsSize) {
//    int src = 0, dst = 0;
//    for (src = 0; src < numsSize; src++)
//    {
//        if (nums[dst] != nums[src])
//        {
//            dst++;
//            nums[dst] = nums[src];
//        }
//    }
//    return dst + 1;
//}

//
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int end1 = m - 1, end2 = n - 1, end = n + m - 1;
//    while (end1 >= 0 && end2 >= 0)
//    {
//        if (nums1[end1] > nums2[end2])
//        {
//            nums1[end--] = nums1[end1--];
//        }
//        else
//        {
//            nums1[end--] = nums2[end2--];
//        }
//    }
//
//    while (end2 >= 0)
//    {
//        nums1[end--] = nums2[end2--];
//    }
//}




