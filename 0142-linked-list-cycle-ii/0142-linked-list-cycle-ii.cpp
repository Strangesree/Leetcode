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
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast,*slow;
        fast=slow=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
                break;              // then there is cycle
        }
        if(!fast || !fast->next)
            return NULL;
        fast=head;         // slow and fast will be pointing to mid of the cycle then 
        while(fast!=slow)
        {
            fast=fast->next;
            slow=slow->next;
        }
        return fast;    
    }
};