class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;
        int i = 0;
        int j = m-1;
        while(i<n && j>=0){
            if(grid[i][j]<0)
            {    
                ans++;
                j--;
                if(j<0)
                {
                    i++;
                    j = m-1;
                }
            }
            else{
                i++;
                j = m-1;
            }
        }
        return ans;
    }
};