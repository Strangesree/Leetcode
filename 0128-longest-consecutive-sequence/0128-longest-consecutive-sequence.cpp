class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1)
            return nums.size();
        set<int> sets;
        int n = nums.size();
        for(int i=0;i<n;i++){
           sets.insert(nums[i]); 
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            int val = nums[i];
            if(sets.count(val-1))
                continue;
            int temp = 0;
            while(sets.count(val)){
                val++;
                temp++;
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};