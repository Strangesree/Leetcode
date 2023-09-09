class Solution {
public:
    int helper(vector<int>&nums,int target,int sum,vector<int>&dp){
        if(sum==target)
            return 1;
        if(sum>target)
            return 0;
        if(dp[sum]!=-1)
            return dp[sum];
        int take = 0 ;
        for(int i=0;i<nums.size();i++){
            take += helper(nums,target,sum+nums[i],dp);
        }
        return dp[sum] = take;
    }
    // void helper(vector<int>&nums,int target,int sum,int &count,vector<int> &dp){
    //     if(sum==target){
    //         count++;
    //         return;
    //     }
    //     if(sum>target)
    //         return;
    //     for(int i=0;i<nums.size();i++){
    //         helper(nums,target,sum+nums[i],count,dp);
    //     }
    // }
    int combinationSum4(vector<int>& nums, int target) {
        int sum = 0;
        int count = 0;
        vector<int> dp(target,-1);
        return helper(nums,target,sum,dp);
        // for(int i=0;i<target-1;i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i-nums[j]>=0){
        //             count += nums[i-nums[j]];
        //         }
        //     }
        // }
        // return count;
    }

};