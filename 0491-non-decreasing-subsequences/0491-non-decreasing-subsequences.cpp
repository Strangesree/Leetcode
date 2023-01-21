class Solution {
public:
    set<vector<int>> ss;
    vector<int> temp;
    void helper(vector<int>& nums,int i)
    {
        if(i==nums.size())
        {
            if(temp.size()>=2)
                ss.insert(temp);
            return;
        }
        if(temp.empty()||temp.back()<=nums[i])
        {
            temp.push_back(nums[i]);
            helper(nums,i+1);
            temp.pop_back();
        }
        helper(nums,i+1);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        helper(nums,0);
        return vector(ss.begin(),ss.end());
    }
};