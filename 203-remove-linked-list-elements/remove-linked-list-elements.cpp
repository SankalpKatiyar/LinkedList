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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *curr = head ;
        ListNode *dummyNode = new ListNode(0);
        ListNode *temp = dummyNode;
        if(head == NULL){
            return head;
        }
        while(curr!=NULL){
            if(curr->val == val){
                curr = curr->next;
            }
            else{
                temp->next = curr;
                temp = curr;
                curr = curr->next;
            }
        } 
        temp->next = NULL;
        return dummyNode->next;
    }
};