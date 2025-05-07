/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
                if (!head || !head->next) return head; // Edge case check

        ListNode *lessHead = new ListNode(0), *greaterHead = new ListNode(0); 
        ListNode *less = lessHead, *greater = greaterHead;

        ListNode* current = head;
        while (current) {
            if (current->val < x) {
                less->next = current;
                less = less->next;
            } else {
                greater->next = current;
                greater = greater->next;
            }
            current = current->next;
        }

        greater->next = nullptr;
        less->next = greaterHead->next;

        ListNode* newHead = lessHead->next;
        

        return newHead;
    }
};