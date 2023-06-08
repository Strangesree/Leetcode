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
                --j;
                ans += n-i;     // m-i negative numbers in current column
            }
            else
                ++i;
        }
        return ans;
    }
};