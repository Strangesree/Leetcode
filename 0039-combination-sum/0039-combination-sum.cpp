class Solution {
public:
    void helper(int i,vector<int> &arr,int target,vector<vector<int>> &ans,vector<int> sample)
    {
        if(i==arr.size())
        {
            if(0==target)
                ans.push_back(sample);
            return;
        }
        if(arr[i]<=target)
        {
            sample.push_back(arr[i]);
            helper(i,arr,target-arr[i],ans,sample);
            sample.pop_back();
        }
        helper(i+1,arr,target,ans,sample);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sample;
        helper(0,candidates,target,ans,sample);
        return ans;
    }
};