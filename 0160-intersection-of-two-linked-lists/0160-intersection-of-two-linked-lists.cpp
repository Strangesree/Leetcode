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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> sample;
        while(headA!=NULL)
        {
            sample.insert(headA);
            headA=headA->next;
        } 
        
        while(headB)
        {
            if(sample.find(headB)!=sample.end())
                return headB;
            headB=headB->next; 
        }
        return NULL;
    }
};