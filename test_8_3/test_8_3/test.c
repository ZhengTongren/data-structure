#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



// struct ListNode {
//    int val;
// 	struct ListNode *next;
// };
// 
//
//
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//    struct ListNode* slow = pListHead;
//    struct ListNode* fast = pListHead;
//
//    while (k--)
//    {
//        fast = fast->next;
//    }
//    if (fast == NULL)
//        return NULL;
//
//    while (fast)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}
//
//
//int main()
//{
//    struct ListNode* n1;
//    struct ListNode* n1;
//    struct ListNode* n1;
//    struct ListNode* n1;
//    struct ListNode* n1;
//    return 0;
//}

//
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//    struct ListNode* slow = pListHead;
//    struct ListNode* fast = pListHead;
//
//    while (k--)
//    {
//        //
//        if (fast == NULL)
//            return NULL;
//        fast = fast->next;
//    }
//
//
//    while (fast)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}

//
//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//    struct ListNode* slow = pListHead;
//    struct ListNode* fast = pListHead;
//
//    while (k--)
//    {
//        if (fast == NULL)
//            return NULL;
//        fast = fast->next;
//    }
//    //err
//    /*while (k--)
//    {
//        fast = fast->next;
//        if (fast == NULL)
//            return NULL;
//    }*/
//
//    while (fast)
//    {
//        fast = fast->next;
//        slow = slow->next;
//    }
//    return slow;
//}


//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* cur = head;
//    struct ListNode* newhead = NULL;
//
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//
//        cur->next = newhead;
//        newhead = cur;
//        cur = next;
//    }
//    return newhead;
//}

//
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//
//    struct ListNode* newhead, * tail;
//    tail = newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    while (list1 && list2)
//    {
//        if (list1->val >= list2->val)
//        {
//            tail->next = list2;
//            tail = list2;
//            list2 = list2->next;
//        }
//        else
//        {
//            tail->next = list1;
//            tail = list1;
//            list1 = list1->next;
//        }
//    }
//    if (list1)
//        tail->next = list1;
//    if (list2)
//        tail->next = list2;
//    return newhead->next;
//}

//
//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//
//    struct ListNode* newhead, * tail;
//     // ��һ���ڱ�λ
//    tail = newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    while (list1 && list2)
//    {
//        if (list1->val >= list2->val)
//        {
//            tail->next = list2;
//            tail = list2;
//            list2 = list2->next;
//        }
//        else
//        {
//            tail->next = list1;
//            tail = list1;
//            list1 = list1->next;
//        }
//    }
//    if (list1)
//        tail->next = list1;
//    if (list2)
//        tail->next = list2;
//
//    struct ListNode* del = newhead;
//    newhead = newhead->next;
//    free(del);
//    return newhead;
//}
//




