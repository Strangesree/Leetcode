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
    bool isCompleteTree(TreeNode* root) {
        if(root==NULL)
            return true;
        queue<TreeNode*> que;
        que.push(root);
        while(que.front()!=NULL)
        {
            TreeNode* fron=que.front();
            que.pop();
            que.push(fron->left);
            que.push(fron->right);
        }
        while(!que.empty() && que.front()==NULL)
            que.pop();
        return que.empty();
    }
};