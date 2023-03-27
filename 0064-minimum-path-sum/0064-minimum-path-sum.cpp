class Solution {
public:
    int n,m;
    int helper(vector<vector<int>> &grid,int row,int col,vector<vector<int>> &dp)
    {
        if(row>=n || col>=m)
            return INT_MAX;
        if(row==n-1 && col==m-1)
            return grid[n-1][m-1];
        if(dp[row][col]!=-1)
            return dp[row][col];
        int down,right;
        down=helper(grid,row+1,col,dp);
        right=helper(grid,row,col+1,dp);
        return dp[row][col]=min(down,right)+grid[row][col];    
    }
    int minPathSum(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(grid,0,0,dp);
    }
};