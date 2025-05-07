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
    ListNode* rotateRight(ListNode* head, int k) {
                ListNode *temp1 = head , *temp2 = head;
        int count = 1;
        if(head == NULL || head->next == NULL){
            return head;
        }
        while(temp1->next != NULL){
            count++;
            temp1 = temp1->next;
        }
        k = k % count;
        if(k==0){
            return head;
        }
        for(int i=1 ; i<(count-k);i++){
            temp2 = temp2->next; 
        }
        temp1->next = head;
        head = temp2->next;
        temp2->next = NULL;

        return head;
    }
};