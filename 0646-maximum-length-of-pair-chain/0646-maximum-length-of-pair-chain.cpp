class Solution {
public:
    static bool compp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(),pairs.end(),compp);
        int ans = 1;
        int start = pairs[0][1];
        for(int i=1;i<n;i++){
            if(start<pairs[i][0]){
                start = pairs[i][1];
                ans++;
            }
        }
        return ans;
    }
};