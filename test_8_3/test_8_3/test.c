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
//     // 带一个哨兵位
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


//class Partition {
//public:
//    ListNode* partition(ListNode* pHead, int x) {
//        // write code here
//        struct ListNode* ghead, * gtail, * lhead, * ltail;
//        ghead = gtail = (struct ListNode*)malloc(sizeof(struct ListNode));
//        lhead = ltail = (struct ListNode*)malloc(sizeof(struct ListNode));
//        struct ListNode* cur = pHead;
//
//        while (cur)
//        {
//            if (cur->val >= x)
//            {
//                gtail->next = cur;
//                gtail = cur;
//            }
//            else
//            {
//                ltail->next = cur;
//                ltail = cur;
//            }
//            cur = cur->next;
//        }
//
//        ltail->next = ghead->next;        
//		  // 不置空 可能出现循环
//        gtail->next = NULL;
//
//        struct ListNode* head = lhead->next;
//        free(lhead);
//        free(ghead);
//        return head;
//    }
//};


//class PalindromeList {
//
//    struct ListNode* middleNode(struct ListNode* head) {
//        struct ListNode* slow, * fast;
//        slow = fast = head;
//        while (fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow;
//    }
//
//    struct ListNode* reverseList(struct ListNode* head) {
//        struct ListNode* cur = head;
//        struct ListNode* newhead = NULL;
//        while (cur)
//        {
//            struct ListNode* next = cur->next;
//            cur->next = newhead;
//            newhead = cur;
//            cur = next;
//        }
//        return newhead;
//    }
//
//
//public:
//    bool chkPalindrome(ListNode* head) {
//        // write code here
//        struct ListNode* mid = middleNode(head);
//        struct ListNode* newhead = reverseList(mid);
//
//        while (newhead)
//        {
//            if (head->val != newhead->val)
//            {
//                return false;
//            }
//            head = head->next;
//            newhead = newhead->next;
//        }
//        return true;
//    }
//};


//struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB) {
//    struct ListNode* curA = headA, * curB = headB;
//    int lenA = 0, lenB = 0;
//
//    while (curA->next)
//    {
//        curA = curA->next;
//        lenA++;
//    }
//    while (curB->next)
//    {
//        curB = curB->next;
//        lenB++;
//    }
//
//    if (curA != curB)
//    {
//        return NULL;
//    }
//
//    int gap = lenA > lenB ? lenA - lenB : lenB - lenA;
//    struct ListNode* longList = headA, * shortList = headB;
//    if (lenB > lenA)
//    {
//        longList = headB;
//        shortList = headA;
//    }
//
//    while (gap--)
//    {
//        longList = longList->next;
//    }
//    while (longList != shortList)
//    {
//        longList = longList->next;
//        shortList = shortList->next;
//    }
//    return longList;
//}


//bool hasCycle(struct ListNode* head) {
//    struct ListNode* slow, * fast;
//    slow = fast = head;
//
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//
//        if (slow == fast)
//        {
//            return true;
//        }
//    }
//    return false;
//}


//ListNode* partition(ListNode* pHead, int x) {
//    // write code here
//    struct ListNode* ghead, * gtail, * lhead, * ltail;
//    ghead = gtail = (struct ListNode*)malloc(sizeof(struct ListNode));
//    lhead = ltail = (struct ListNode*)malloc(sizeof(struct ListNode));
//
//    struct ListNode* cur = pHead;
//    while (cur)
//    {
//        if (cur->val >= x)
//        {
//            gtail->next = cur;
//            gtail = cur;
//        }
//        else
//        {
//            ltail->next = cur;
//            ltail = cur;
//        }
//        cur = cur->next;
//    }
//    gtail->next = NULL;
//    ltail->next = ghead->next;
//    struct ListNode* head = lhead->next;
//    free(ghead);
//    free(lhead);
//    return head;
//}


