class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary = 0;
        int n = mat.size();
        for(int i=0;i<n;i++)
        {
            primary += mat[i][i];
            if(i!=n-i-1)
                primary +=mat[i][n-i-1];
        }
        return primary;
    }
};