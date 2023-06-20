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
    int ans = INT_MAX ,val = -1;
    int getMinimumDifference(TreeNode* root) {
        if(root->left!=NULL)
            getMinimumDifference(root->left);
        if(val>=0)   // we need some value to compare
            ans = min(ans,abs(root->val - val));
        val = root->val;
        if(root->right!=NULL)
            getMinimumDifference(root->right);
        return ans;        
    }
};