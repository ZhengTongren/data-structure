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


