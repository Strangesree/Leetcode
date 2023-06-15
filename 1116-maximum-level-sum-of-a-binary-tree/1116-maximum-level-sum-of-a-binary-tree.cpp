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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans = 1;
        int level = 0;
        int ansval = root->val;
        while(!q.empty()){
            int size = q.size();
            int temp = 0;
            while(size--){
                TreeNode* frontone = q.front();
                q.pop();
                temp += frontone->val;
                if(frontone->left)
                    q.push(frontone->left);
                if(frontone->right)
                    q.push(frontone->right);
            }
            level = level+1;
            if(temp>ansval){
                ansval = temp;
                ans = level;
            }
        }
        return ans;
    }
};