/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int> mp;
    int maxi = 0;
    void trav(TreeNode* root){
        if(root==NULL)
            return;
        trav(root->left);
        mp[root->val]++;
        if(mp[root->val]>maxi)
            maxi = mp[root->val];
        trav(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> ans;
        trav(root);
        for(auto i:mp){
            if(i.second==maxi)
                ans.push_back(i.first);
        }
        return ans;
    }
};