class Solution {
public:
    int helper(vector<int> &arr)
    {
        int n = arr.size();
        int prev2 = 0;
        int prev = arr[0];
        int curr;
        for (int i=1; i<n; i++) {
            int pick = arr[i];
            if (i > 1) pick += prev2;
            int notPick = 0 + prev;
            curr = max(pick, notPick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
    
    int rob(vector<int>& nums) {
        vector<int> temp1,temp2;
        int n = nums.size();
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0)
                temp2.push_back(nums[i]);
            if(i!=n-1)
                temp1.push_back(nums[i]);
        }
        return max(helper(temp1),helper(temp2));
    }
};