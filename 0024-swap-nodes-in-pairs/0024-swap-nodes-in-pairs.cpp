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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp1=head;
        ListNode* temp2=head->next;
        ListNode* ans=temp2;
        ListNode* sam=swapPairs(temp2->next);
        temp1->next=sam;
        temp2->next=temp1;
        return ans;
    }
};