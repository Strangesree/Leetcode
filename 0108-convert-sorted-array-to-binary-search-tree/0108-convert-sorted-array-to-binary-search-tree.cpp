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
    TreeNode* helper(vector<int>& nums,int low,int high)
    {
        if(low<=high)
        {
            int mid=(low+high)/2;
            TreeNode* middle=new TreeNode(nums[mid]);
            TreeNode* lefty=helper(nums,low,mid-1);
            TreeNode* righty=helper(nums,mid+1,high);
            middle->left=lefty;
            middle->right=righty;
            return middle;
        }
        else 
            return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)
            return NULL;
        if(nums.size()==1)
            return new TreeNode(nums[0]);
        return helper(nums,0,nums.size()-1);
    }
};