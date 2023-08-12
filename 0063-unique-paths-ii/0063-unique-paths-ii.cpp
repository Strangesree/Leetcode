class Solution {
public:
    int solveTab(vector<vector<int>>& obstacleGrid){
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[0][0]==1) return 0;
        vector<vector<int>>dp(m,vector<int>(n,0));
        dp[0][0]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                
                if(obstacleGrid[i][j]==0){ // if there is no obstacle present in the grid
                    
                    int moveUp=0;
                    int moveleft=0;
                    
                    if(i-1>=0){
                        moveUp=dp[i-1][j];
                    }
                    if(j-1>=0){
                        moveleft=dp[i][j-1];
                    }
                    dp[i][j]=moveUp+moveleft;
                }
            }
        }
        return dp[m-1][n-1];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        return solveTab(obstacleGrid);
  }
};