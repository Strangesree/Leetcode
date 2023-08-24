class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int innercount = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                innercount++;
                if(innercount>2)
                    continue;
            }
            else
                innercount = 1;
            nums[count++] = nums[i];
        }
        return count;
    }
};