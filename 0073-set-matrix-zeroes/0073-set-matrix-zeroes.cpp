class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> element;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0)
                    element.push_back({i,j});
            }
        }
        for(auto ele : element){
            int i = ele.first;
            int j = ele.second;
            for(int s=0;s<m;s++)
                matrix[i][s]=0;
            for(int s=0;s<n;s++)
                matrix[s][j]=0;
        }
    }
};