#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>


//
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* prev = NULL, * cur = head;
//    while (cur)
//    {
//        if (cur->val == val)
//        {
//            if (cur == head)
//            {
//                head = cur->next;
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


//
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* newhead = NULL, * cur = head, * tail = NULL;
//
//    while (cur)
//    {
//        if (cur->val == val)
//        {
//            struct ListNode* del = cur;
//            cur = cur->next;
//            free(del);
//        }
//        else
//        {
//            if (newhead == NULL)
//            {
//                newhead = tail = cur;
//            }
//            else
//            {
//                tail->next = cur;
//                tail = tail->next;
//            }
//            cur = cur->next;
//        }
//    }
//    if (tail)
//        tail->next = NULL;
//    return newhead;
//}


//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* slow = head, * fast = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//
//    return slow;
//}


//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* n1 = NULL;
//    struct ListNode* n2 = head;
//    struct ListNode* n3 = NULL;
//
//    while (n2)
//    {
//        n3 = n2->next;
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//    }
//    return n1;
//}


//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    return slow;
//}


//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//    if (pListHead == NULL || k == 0)
//        return NULL;
//    struct ListNode* slow = pListHead;
//    struct ListNode* fast = pListHead;
//
//    while (k - 1 > 0)
//    {
//        fast = fast->next;
//        k--;
//    }
//    if (fast == NULL)
//        return NULL;
//
//    while (fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}


//struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//    if (list1 == NULL)
//        return list2;
//    if (list2 == NULL)
//        return list1;
//
//    struct ListNode* newnode = NULL;
//    struct ListNode* tail = NULL;
//    while (list1 && list2)
//    {
//        if (tail == NULL)
//        {
//            if (list1->val <= list2->val)
//            {
//                newnode = tail = list1;
//                list1 = list1->next;
//            }
//            else
//            {
//                newnode = tail = list2;
//                list2 = list2->next;
//            }
//        }
//        else
//        {
//            if (list1->val <= list2->val)
//            {
//                tail->next = list1;
//                tail = tail->next;
//                list1 = list1->next;
//            }
//            else
//            {
//                tail->next = list2;
//                tail = tail->next;
//                list2 = list2->next;
//            }
//        }
//    }
//    if (list1)
//        tail->next = list1;
//    if (list2)
//        tail->next = list2;
//    return newnode;
//}


