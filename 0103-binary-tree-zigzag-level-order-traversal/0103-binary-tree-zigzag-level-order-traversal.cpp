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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
            return {};
        vector<vector<int>> ans;
        queue<TreeNode*> que;
        que.push(root);
        int level=0;
        while(!que.empty())
        {
            int size=que.size();
            vector<int> sample(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=que.front();
                que.pop();
                if(level==0)
                    sample[i]=temp->val;
                else
                    sample[size-i-1]=temp->val;
                if(temp->left)  
                    que.push(temp->left);
                if(temp->right)
                    que.push(temp->right);
            }
            ans.push_back(sample);
            level=level==0?1:0;
        } 
        return ans;
    }
};