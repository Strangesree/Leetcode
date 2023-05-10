class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int top = 0;
        int left = 0;
        int right = n-1;
        int bottom = n-1;
        int start = 1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                ans[top][i]=start;
                start++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=start;
                start++;
            }
            right--;
            // if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans[bottom][i]=start;
                    start++;
                }
                bottom--;
            // }
            // if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=start;
                    start++;
                }
                left++;
            // }
        }
        return ans;
    }
    
};