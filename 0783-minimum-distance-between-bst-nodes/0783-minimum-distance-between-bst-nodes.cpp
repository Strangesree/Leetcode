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
    vector<int> ans;
    void helper(TreeNode* root)
    {
        if(root!=NULL)
        {
            helper(root->left);
            ans.push_back(root->val);
            helper(root->right);
        }
    }
    int minDiffInBST(TreeNode* root) {
        helper(root);
        sort(ans.begin(),ans.end());
        int temp=ans[0];
        int ans1=INT_MAX;
        for(int i=1;i<ans.size();i++)
        {
            if(ans[i]-ans[i-1]<ans1)
                ans1=ans[i]-ans[i-1];
        }
        return ans1;
    }
};