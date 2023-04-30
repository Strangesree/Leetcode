class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
       int m = mat.size(), n = mat[0].size(); 
        vector<pair<int, int>> loc(m*n); 
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                loc[mat[i][j]-1] = make_pair(i, j); 
            }
        }
        vector<int> r(m), c(n); 
        for (int x = 0; x < arr.size(); ++x) {
            auto [i, j] = loc[arr[x]-1]; 
            if (++r[i] == n) return x; 
            if (++c[j] == m) return x; 
        }
        return -1;
    }
};