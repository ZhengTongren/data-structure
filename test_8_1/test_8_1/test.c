#define _CRT_SECURE_NO_WARNINGS 1

//struct ListNode* FindKthToTail(struct ListNode* pListHead, int k) {
//    // write code here
//    struct ListNode* slow = pListHead;
//    struct ListNode* fast = pListHead;
//
//    while (k--)
//    {
//        // 如果fast为空，说明链表没有k步长
//        if (fast == NULL)
//            return NULL;
//        fast = fast->next;
//    }
//    while (fast)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//}


