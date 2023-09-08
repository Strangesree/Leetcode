class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1);
            for(int s=1;s<i;s++){
                row[s]=ans[i-1][s-1]+ans[i-1][s];
            }
            ans.push_back(row);
        }
        return ans;
    }
};