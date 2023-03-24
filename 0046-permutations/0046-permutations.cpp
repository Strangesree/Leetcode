class Solution {
public:
    void helper(int freq[],vector<int> &nums,vector<int> ds,vector<vector<int>> &ans)
    {
       if(ds.size()==nums.size())
       {
            ans.push_back(ds);
            return;
       }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]=1;
                helper(freq,nums,ds,ans);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
            freq[i]=0;
        helper(freq,nums,ds,ans);
        return ans;
    }
};
