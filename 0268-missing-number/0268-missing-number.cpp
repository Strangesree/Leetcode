class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> sample(10001);
        for(int i=0;i<nums.size();i++)
            sample[nums[i]]++;
        for(int i=0;i<10001;i++)
        {
            if(sample[i]==0)
                return i;
        }
        return 0;
    }
};