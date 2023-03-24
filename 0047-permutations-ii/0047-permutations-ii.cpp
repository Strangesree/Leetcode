class Solution {
public:
    void helper(int ind,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        for(int i=ind;i<nums.size();i++)
        {
            if(i>ind && nums[i]==nums[ind])         // to get the unique permutations
                continue;                           // take care that pass by value 
            swap(nums[ind],nums[i]);                // is maintained
            helper(ind+1,nums,ans);
        }
        // restore nums
        for(int i=nums.size()-1;i>ind;i--)
            swap(nums[ind],nums[i]);
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(0,nums,ans);
        return ans;
    }
};