class Solution {
public:
    int helper(vector<vector<int>> &arr,int i,int j,vector<vector<int>> &dp)
    {
        if(j<0 || j>arr.size()-1)
            return 10000;      // in order to get the min if case fails we return maximum.
        if(i==0)
            return arr[0][j];
        if(dp[i][j]!=-1)
            return dp[i][j];
        int up = arr[i][j] + helper(arr,i-1,j,dp);
        int dialeft = arr[i][j] + helper(arr,i-1,j-1,dp);
        int diaright = arr[i][j] + helper(arr,i-1,j+1,dp);
        return dp[i][j] = min(up,min(dialeft,diaright));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans = INT_MAX;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        for(int i=0;i<matrix.size();i++)
        {
            ans = min(ans,helper(matrix,n-1,i,dp));
        }
        return ans;
    } 
};