#define _CRT_SECURE_NO_WARNINGS 1


//
//struct ListNode* reverseList(struct ListNode* head) {
//
//    struct ListNode* n1 = NULL;
//    struct ListNode* n2 = head;
//    struct ListNode* n3 = NULL;
//    if (n2 != NULL)
//        n3 = n2->next;
//
//    while (n2 != NULL)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//
//        if (n3 != NULL)
//            n3 = n3->next;
//    }
//    return n1;
//}
//


#include <stdio.h>

//
//int main()
//{
//	int t = 0;
//	/*while (printf("*"))
//	{
//		t++;
//		if (t < 3)
//			break;
//	}*/
//
//	while ('O')
//	{
//		t++;
//		if (t < 3)
//			break;
//	}
//	return 0;
//}


//
//int BinarySearch(int* nums, int numsLen, int k)
//{
//    int left = 0;
//    int right = numsLen - 1;
//    int mid = (left + right) / 2;
//
//    while (left <= right)
//    {
//        if (nums[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (nums[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else if (nums[mid] == k)
//        {
//            return mid;
//        }
//        mid = (left + right) / 2;
//    }
//    return -1;
//}
//
//int GetNumberOfK(int* nums, int numsLen, int k) {
//    // write code here
//    int count = 0;
//    int pos = BinarySearch(nums, numsLen, k);
//
//    if (pos != -1)
//    {
//        int cur1 = pos;
//        int cur2 = pos - 1;
//        while (nums[cur1] == k)
//        {
//            count++;
//            cur1++;
//        }
//        while (nums[cur2] == k)
//        {
//            count++;
//            cur2--;
//        }
//        return count;
//    }
//
//    return 0;
//}
//
//
//int main()
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9  };
//    int ret = BinarySearch(arr, 10, 7);
//    //int ret = GetNumberOfK(arr, 4, 4);
//    printf("%d\n", ret);
//    return 0;
//}

//
//int main()
//{
//	int a = 29;
//	int b = 15;
//	return 0;
//}


//
//int convertInteger(int A, int B) {
//    int tmp = A ^ B;
//    int count = 0;
//    for (int i = 0; i < 32; i++)
//    {
//        if ((tmp >> i) & 1 == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}


//
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* prev = NULL, * cur = head;
//
//    while (cur)
//    {
//        if (cur->val == val)
//        {
//            if (head->val == val)
//            {
//                head = head->next;
//                free(cur);
//                cur = head;
//            }
//            else
//            {
//                prev->next = cur->next;
//                free(cur);
//                cur = prev->next;
//            }
//        }
//        else
//        {
//            prev = cur;
//            cur = cur->next;
//        }
//    }
//    return head;
//}


