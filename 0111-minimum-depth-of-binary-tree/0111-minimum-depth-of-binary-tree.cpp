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
    int helper(TreeNode *root){
        if(root==NULL)
            return 0;
        int lefty = helper(root->left);
        int righty = helper(root->right);
        if(root->left && root->right){        // not a left node therefore we return min
            return min(lefty+1,righty+1);
        }
        return max(lefty+1,righty+1);          // if it hasIf the current node has only one child or no children, we return the maximum depth between the left and right subtrees plus 1. This is because in this case, we should consider the depth of the subtree that has nodes, as the other subtree is empty. 
    }
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        return helper(root);
    }
};