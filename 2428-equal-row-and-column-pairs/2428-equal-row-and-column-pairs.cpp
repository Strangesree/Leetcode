class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int> rowm;
        unordered_map<string,int> colm;
        int n = grid.size();
        for(int i=0;i<n;i++){
            string temprow = "";
            string tempcol = "";
            for(int j=0;j<n;j++){
                temprow += to_string(grid[i][j])+"#";
                tempcol += to_string(grid[j][i])+"#";
            }
            rowm[temprow]++;
            colm[tempcol]++;
        }
        int ans = 0;
        for(auto i:rowm){
            if(colm[i.first])
                ans += colm[i.first]*i.second;
        }
        return ans;
    }
};