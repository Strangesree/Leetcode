class Solution {
public:
    void helper(int ind,vector<int> nums,vector<vector<int>> &ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[ind])         // to get the unique permutations
                continue;
            swap(nums[ind],nums[i]);
            helper(ind+1,nums,ans);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(0,nums,ans);
        return ans;
    }
};