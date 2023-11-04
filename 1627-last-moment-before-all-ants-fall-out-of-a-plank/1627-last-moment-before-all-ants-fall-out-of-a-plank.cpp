class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int ans = 0;
        for(auto &s:left)
            ans = max(ans,s);
        for(auto &s:right)
            ans = max(ans,n-s);
        return ans;
    }
};