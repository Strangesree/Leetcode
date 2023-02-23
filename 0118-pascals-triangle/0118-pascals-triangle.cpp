class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++)
        {
            ans[i].resize(i+1,1);
            for(int s=1;s<ans[i].size()-1;s++)
            {
                ans[i][s]=ans[i-1][s-1]+ans[i-1][s];
            }
        }
        return ans;
    }
};