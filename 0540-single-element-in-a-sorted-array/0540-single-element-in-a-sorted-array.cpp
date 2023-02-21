class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        if(nums.size()==1)
            return nums[0];
        if(nums[0]!=nums[1])
            return nums[0];
        if(nums[high]!=nums[high-1])
            return nums[high];
        while(low<=high)
        {
            int i=(low+high)/2;
            if(nums[i]!=nums[i+1]&&nums[i]!=nums[i-1])
                return nums[i];
            else if(((i%2==0)&&nums[i]==nums[i+1])||((i%2==1)&&nums[i]==nums[i-1]))
                low=i+1; 
            else
                high=i-1;
        }
        return -1;
    }
};