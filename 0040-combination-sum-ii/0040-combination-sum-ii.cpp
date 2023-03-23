class Solution {
public:
    void helper(int i,vector<int> &arr,int target,vector<vector<int>> &ans,vector<int> ds)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int s=i;s<arr.size();s++)
        {
            if(s>i && arr[s]==arr[s-1])
                continue;
            if(arr[s]>target)
                break;
            ds.push_back(arr[s]);
            helper(s+1,arr,target-arr[s],ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        helper(0,candidates,target,ans,ds);
        return ans;
    }
};