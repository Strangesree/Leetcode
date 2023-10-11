class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi = 0;
        for(int i=0;i<accounts.size();i++){
            int temp = 0;
            for(int j=0;j<accounts[i].size();j++)
                temp += accounts[i][j];
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};