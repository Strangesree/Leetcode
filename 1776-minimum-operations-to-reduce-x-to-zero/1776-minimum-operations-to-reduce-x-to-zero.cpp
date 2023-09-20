class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long totalsum = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            totalsum += nums[i];
        }
        long target = totalsum - x;
        int begin = 0;
        int end = 0;
        long sumi = 0;
        int ans = 0;
        if(target==0)
            return n;
        while(end<n){
            sumi += nums[end];
            while(begin<=end && sumi>target){
                sumi -= nums[begin];
                begin++;
            }
            if(sumi==target){
                ans = max(ans,end-begin+1);
            }
            end++;
        }
        if(ans==0)
            return -1;
        else
            return n-ans;
    }
};