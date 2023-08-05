#define _CRT_SECURE_NO_WARNINGS 1


//struct ListNode* detectCycle(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//
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
//            return meet;
//        }
//    }
//    return NULL;
//}


//#include <stdio.h>


//struct Node
//{
//    int val;
//    struct Node* next;
//    struct Node* random;
//};
//

//struct Node* BuyLTNode(x)
//{
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    newnode->val = x;
//    return newnode;
//}
//
//struct Node* copyRandomList(struct Node* head) {
//    struct Node* copyhead, * cur2;
//    copyhead = cur2 = NULL;
//    struct Node* cur = head;
//    while (cur)
//    {
//        cur2 = BuyLTNode(cur->val);
//        cur2 = cur2->next;
//        cur = cur->next;
//    }
//}
//
//
//void test1()
//{
//    struct Node* n1 = BuyLTNode(10);
//    struct Node* n2 = BuyLTNode(20);
//    struct Node* n3 = BuyLTNode(30);
//    struct Node* n4 = BuyLTNode(40);
//    struct Node* n5 = BuyLTNode(50);
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = NULL;
//    struct Node* newhead = copyRandomList(n1);
//}
//
//int main()
//{
//    test1();
//    return 0;
//}


//#include <stdlib.h>
//
//
//struct Node* BuyLTNode(x)
//{
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    newnode->val = x;
//    return newnode;
//}
//
//struct Node* copyRandomList(struct Node* head) {
//    struct Node* copyhead, * cur2;
//    copyhead = cur2 = NULL;
//    struct Node* cur = head;
//    while (cur)
//    {
//        cur2 = BuyLTNode(cur->val);
//        cur2 = cur2->next;
//        cur = cur->next;
//    }
//
//    cur = head, cur2 = copyhead;
//    while (cur)
//    {
//        struct Node* random = head, * random2 = copyhead;
//        int count = 0;
//        while (random != cur->random)
//        {
//            random = random->next;
//            count++;
//        }
//        while (count--)
//        {
//            random2 = random2->next;
//        }
//        cur2->random = random2;
//        cur = cur->next;
//        cur2 = cur2->next;
//    }
//    return copyhead;
//}

//
//int main()
//{
//    /*struct Node* n1, * n2, * n3, * n4;
//    n1 = n2 = n3 = n4 = NULL;
//    n1->val = 10;
//    n2->val = 20;
//    n3->val = 30;
//    n4->val = 40;*/
//    struct Node* n1 = BuyLTNode(10);
//    struct Node* n2 = BuyLTNode(20);
//    struct Node* n3 = BuyLTNode(30);
//    struct Node* n4 = BuyLTNode(40);
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = NULL;
//
//    struct Node* copy = copyRandomList(n1);
//
//    return 0;
//}

//
//typedef struct Node
//{
//    int val;
//    struct Node* next;
//    struct Node* random;
//}Node;
//
//
//struct Node* BuyNode(int x)
//{
//    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
//    node->val = x;
//    node->next = NULL;
//    node->random = NULL;
//    return node;
//}
//
//
//void NodePushBack(struct Node* phead, int x)
//{
//    struct Node* newnode = BuyNode(x);
//    Node* cur = phead;
//    while (cur->next)
//    {
//        cur = cur->next;
//    }
//    cur->next = newnode;
//
//}
//
//void NodePrint(Node* phead)
//{
//    assert(phead);
//    struct Node* cur = phead;
//    while (cur)
//    {
//        printf("%d ->", cur->val);
//    }
//    printf("\n");
//}
//
//
//int main()
//{
//    Node* plist = NULL;
//    NodePushBack(&plist, 10);
//    NodePushBack(&plist, 20);
//    NodePushBack(&plist, 30);
//    NodePrint(&plist);
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int val;
    struct Node* next;
    struct Node* random;
};


//struct Node* BuyNode(int x)
//{
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    newnode->val = x;
//    newnode->next = NULL;
//    newnode->random = NULL;
//    return newnode;
//}
//
//void NodePushBack(struct Node** pphead, int x)
//{
//    struct Node* cur = *pphead;
//    struct Node* newnode = BuyNode(x);
//    if (cur == NULL)
//    {
//        *pphead = newnode;
//    }
//    else
//    {
//        while (cur->next)
//        {
//            cur = cur->next;
//        }
//        cur->next = newnode;
//    }
//}
//
//
//void NodePrint(struct Node* phead)
//{
//    struct Node* cur = phead;
//    while (cur)
//    {
//        printf("%d->", cur->val);
//        cur = cur->next;
//    }
//    printf("NULL\n");
//}
//
//int main()
//{
//    struct Node* plist = NULL;
//    NodePushBack(&plist, 10);
//    NodePushBack(&plist, 10);
//    NodePrint(plist);
//    return 0;
//}


//struct Node* BuyNode(int x)
//{
//    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
//    newnode->val = x;
//    newnode->next = NULL;
//    newnode->random = NULL;
//    return newnode;
//}
//
//void NodePushBack(struct Node** pphead, int x)
//{
//    struct Node* cur = *pphead;
//    struct Node* newnode = BuyNode(x);
//    if (*pphead == NULL)
//    {
//        *pphead = newnode;
//    }
//    else
//    {
//        while (cur->next)
//        {
//            cur = cur->next;
//        }
//        cur->next = newnode;
//    }
//}
//
//struct Node* copyRandomList(struct Node* head) {
//    struct Node* cur = head;
//    struct Node* copyhead, * cur2;
//    copyhead = cur2 = NULL;
//
//    while (cur)
//    {
//        NodePushBack(&copyhead, cur->val);
//        cur = cur->next;
//    }
//    cur = head, cur2 = copyhead;
//    while (cur)
//    {
//        struct Node* random = head;
//        struct Node* random2 = copyhead;
//        int count = 0;
//        while (random != cur->random)
//        {
//            random = random->next;
//            count++;
//        }
//        while (count--)
//        {
//            random2 = random2->next;
//        }
//        cur2->random = random2;
//
//        cur = cur->next;
//        cur2 = cur2->next;
//    }
//    return copyhead;
//}
//
//
//int main()
//{
//    struct Node* n1, * n2, * n3, * n4, * n5;
//    n1 = n2 = n3 = n4 = n5 = NULL;
//    NodePushBack(&n1, 7);
//    NodePushBack(&n2, 13);
//    NodePushBack(&n3, 11);
//    NodePushBack(&n4, 10);
//    NodePushBack(&n5, 1);
//    n1->next = n2;
//    n2->next = n3;
//    n3->next = n4;
//    n4->next = n5;
//    n5->next = NULL;
//
//    n1->random = NULL;
//    n2->random = n1;
//    n3->random = n5;
//    n4->random = n3;
//    n5->random = n1;
//
//    struct Node* ptr = copyRandomList(n1);
//    NodePrint
//    return 0;
//}


