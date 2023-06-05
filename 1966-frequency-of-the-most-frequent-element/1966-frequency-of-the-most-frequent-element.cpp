class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int left = 0;
        int maxi = 0;
        long sum = 0;
        sort(nums.begin(),nums.end());
        for(int right = 0;right<nums.size();right++){
            sum += nums[right];
            while((long)nums[right]*(right-left+1) - sum > k){ 
                sum -= nums[left];    // integer overflow error be careful
                left++;
            }
            maxi = max(maxi,right-left+1);
        }
        return maxi;    
    }
};