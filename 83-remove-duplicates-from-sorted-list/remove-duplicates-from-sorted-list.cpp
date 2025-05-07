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
    ListNode* deleteDuplicates(ListNode* head) {
                ListNode *dummyNode = new ListNode(-101);
        ListNode *temp = dummyNode , *curr = head;

        while(curr != NULL){
            if(curr->val != temp->val){
                temp->next = curr;
                temp = curr;
                curr = curr->next;

            }
            else{
                curr = curr->next;
            }
        }
        temp->next = NULL;

        return dummyNode->next;
    }
};