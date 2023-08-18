class Solution {
public:
    void helper(int i,vector<int> temp,vector<int>& nums,vector<vector<int>> &ans){
        ans.push_back(temp);
        for(int j=i;j<nums.size();j++){
            temp.push_back(nums[j]);
            helper(j+1,temp,nums,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0,temp,nums,ans);
        return ans;
    }
};