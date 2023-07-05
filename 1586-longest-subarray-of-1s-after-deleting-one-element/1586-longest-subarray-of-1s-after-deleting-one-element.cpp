class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        int start = 0;
        int end = 0;
        int skip = 0;
        while(end<nums.size()){
            if(nums[end]==0)
                skip++;
            if(skip>1){
                if(nums[start]==0)
                    skip--;
                start++;
            }
            ans = max(ans,end-start);
            end++;
        }
        return ans;
    }
};