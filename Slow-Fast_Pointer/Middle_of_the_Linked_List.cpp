
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    #define ed endl
    #define Node ListNode
    #define null NULL
     ListNode* middleNode(ListNode* head){
        Node* slow=head;
        Node* fast=head;
        while(fast !=null && fast-> next !=null){
            slow= slow->next;
            fast=fast->next->next;
        } 
         return slow;
    }
};
