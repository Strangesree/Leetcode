class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int primary = 0;
        int secondary = 0;
        int n = mat.size();
        for(int i=0;i<n;i++)
            primary += mat[i][i];
        int k = n-1;
        for(int j=0;j<n;j++)
            secondary += mat[j][k--];
        if(n%2!=0)
            primary = primary + secondary - mat[n/2][n/2];
        else
            primary = primary + secondary;
        return primary;
    }
};