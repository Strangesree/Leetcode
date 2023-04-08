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
    int helper(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int lefty=helper(root->left);
        int righty=helper(root->right);
        if(lefty==-1 || righty==-1 || abs(lefty-righty)>1)
            return -1;
        return max(lefty,righty)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(helper(root)==-1)
            return false;
        return true;
    }
};