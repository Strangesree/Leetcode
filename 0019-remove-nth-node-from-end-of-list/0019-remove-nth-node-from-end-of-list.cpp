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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* central = new ListNode(-1);
        central->next = head;

        ListNode* prev = central;
        ListNode* curr = head;
        ListNode* fast = head;

        while(--n) 
            fast = fast->next;
        while(fast->next){
            prev = curr;
            curr = curr->next;
            fast = fast->next;
        }
        prev->next = curr->next;
        return central->next;
    }
};