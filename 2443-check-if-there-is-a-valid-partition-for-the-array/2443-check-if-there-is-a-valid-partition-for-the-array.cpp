class Solution {
public:
    bool helper(vector<int>&nums,int i,vector<int> & dp){
        if(i==nums.size())
            return true;
        if(dp[i]!=-1)
            return dp[i];
        if(i+1<nums.size() && nums[i]==nums[i+1]){  // 2 consecutive
            if(helper(nums,i+2,dp))
                return true;
            if(i+2<nums.size() && nums[i]==nums[i+2]){   // 3 consecutive
                if(helper(nums,i+3,dp))
                    return true;
            }
        }
        if(i+2 < nums.size() && nums[i] ==nums[i+1]-1 && nums[i]==nums[i+2]-2){ // sort
            if(helper(nums,i+3,dp))
                return true;
        }
        return dp[i] = false;

        // the false value is being stored. But But But ...... as soon as you get the answer "TRUE" .. you will start returning that is further no any recursive calls will be made (no recursive tree further will be created!!! You can Dry Run.) and since no any recursive calls hence you have solved already your problem and know that final answer will be "True" so there is no need of storing the result "TRUE" further.
    }
    bool validPartition(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return helper(nums,0,dp);
    }
};
