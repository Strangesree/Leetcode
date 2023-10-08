class Solution {
public:
    int dp[501][501][2];
    int f(int i, int j, vector<int> &nums1, vector<int> &nums2, bool flag){
        int m = nums1.size();
        int n = nums2.size();
        
        if(i == m || j == n){
            if(flag == 0)
                return -1e9;
            return 0;
        }
        if(dp[i][j][flag] != -1)
            return dp[i][j][flag];
            
        int skip = f(i+1, j, nums1, nums2, flag);
        int take = nums1[i] * nums2[j] + f(i+1, j+1, nums1, nums2, 1);
        int notTake = f(i, j+1, nums1, nums2, flag);
        return dp[i][j][flag] = max({skip, take, notTake});
    }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        memset(dp, -1, sizeof(dp));
        return f(0, 0, nums1, nums2, 0);
    }
};