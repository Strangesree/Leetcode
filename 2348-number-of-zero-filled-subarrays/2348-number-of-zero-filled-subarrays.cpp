class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0;
        long long start=0;
        long long end=0;
        int n=nums.size();
        while(end<n)
        {
            if(nums[end]==0)
            {
                start=end;
                while(end<n && nums[end]==0)
                    end++;
                long long val=end-start;
                ans+=(val*(val+1))/2;
            }
            else
                end++;
        }
        return ans;
    }
};