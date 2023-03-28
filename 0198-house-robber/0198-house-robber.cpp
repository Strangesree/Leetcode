class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0], nums[1]);
        int n=nums.size(),x=0;
        int y=nums[n-1];
        for(int i=n-3; i>=0; i--){
            nums[i]+=max(x,y);
            x=nums[i+2];
            y=nums[i+1];
        }
        return max(nums[0],nums[1]);
    }
};