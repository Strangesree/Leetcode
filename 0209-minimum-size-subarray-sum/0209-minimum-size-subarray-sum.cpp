class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int start = 0;
        int end = 0;
        int n = nums.size();
        int sum = 0;
        while(end<n){
            sum += nums[end];
            end++;
            while(sum >= target){
                ans = min(ans,end-start);
                sum -= nums[start];
                start++;
            }
        }
        return (ans == INT_MAX) ? 0 : ans;
    }
};