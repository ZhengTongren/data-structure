#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>

class PalindromeList {

    ListNode* middleNode(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }


    ListNode* reverseList(ListNode* head)
    {
        ListNode* cur = head;
        ListNode* newhead = NULL;
        while (cur)
        {
            ListNode* next = cur->next;

            cur->next = newhead;
            newhead = cur;
            cur = next;
        }
        return newhead;
    }


public:
    bool chkPalindrome(ListNode* head) {
        // write code here
        ListNode* mid = middleNode(head);
        ListNode* head2 = reverseList(mid);

        while (head2 && head)
        {
            if (head->val != head2->val)
            {
                return false;
            }
            head = head->next;
            head2 = head2->next;
        }
        return true;
    }
};


