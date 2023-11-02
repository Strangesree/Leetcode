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
    int cnt=0;
    pair<int,int> solve(TreeNode *root){
        if(!root) return {0,0};
        if(!root->left && !root->right) {
            cnt+=1; 
            return {root->val,1};
        }
        pair<int,int> p1=solve(root->left);
        pair<int,int> p2=solve(root->right);
        int sum=p1.first+p2.first+root->val;
        int nodes=1+p1.second+p2.second;
        if(root->val == sum/nodes) cnt+=1;
        return {sum,nodes};
    }

    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return cnt;
    }
};