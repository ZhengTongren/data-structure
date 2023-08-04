#define _CRT_SECURE_NO_WARNINGS 1


//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* slow, * fast;
//    slow = fast = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//
//        if (slow == fast)
//        {
//            struct ListNode* meet = slow;
//            while (head != meet)
//            {
//                head = head->next;
//                meet = meet->next;
//            }
//            return head;
//        }
//    }
//    return NULL;
//}


//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* slow, * fast;
//    slow = fast = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//
//        if (slow == fast)
//        {
//            struct ListNode* meet = slow;
//            struct ListNode* newhead = meet->next;
//            meet->next = NULL;
//            int len1 = 0, len2 = 0;
//            struct ListNode* cur1 = head, * cur2 = newhead;
//            while (cur1)
//            {
//                cur1 = cur1->next;
//                len1++;
//            }
//            while (cur2)
//            {
//                cur2 = cur2->next;
//                len2++;
//            }
//            int gap = abs(len1 - len2);
//            struct ListNode* longList = head, * shortList = newhead;
//            if (len1 < len2)
//            {
//                longList = newhead;
//                shortList = head;
//            }
//            while (gap--)
//            {
//                longList = longList->next;
//            }
//            while (longList != shortList)
//            {
//                longList = longList->next;
//                shortList = shortList->next;
//            }
//            return longList;
//        }
//    }
//    return NULL;
//}


