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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<int> temp(k);
        int n = 0;
        ListNode* temp1 = head;
        while(temp1!=NULL){
            n++;
            temp1 = temp1->next;
        }
        int size = n/k;
        int extra = n%k;
        for(int i=0;i<k;i++){
            temp[i] = size;
            if(extra>0){
                temp[i]++;
                extra--;
            }
        }
        // for(auto i:temp)
        //     cout<<i<<" ";
        temp1 = head;
        vector<ListNode*> ans;
        ListNode* anshead = temp1;
        for(int i=0;i<k;i++){
            ans.push_back(anshead);
            temp1 = anshead;
            while(temp[i]!=1 && temp1!=NULL){
                temp1 = temp1->next;
                temp[i]--;
            }
            if(temp1!=NULL){
                anshead = temp1->next;
                temp1->next = NULL;
            }
            else{
                anshead = NULL;
            }
        }
        return ans;
    }
};