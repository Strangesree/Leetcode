class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)
            return true;
        int i = 0;
        int n = nums.size();
        for(i=0;i<n-1;i++){
            if(nums[i]<=nums[i+1])
                continue;
            else
                break;
        }
        if(i==n-1)
            return true;
        int j = 0;
        for(j=0;j<n-1;j++){
            if(nums[j]>=nums[j+1])
                continue;
            else
                break;
        }
        if(j==n-1)
            return true;
        return false;
    }
};