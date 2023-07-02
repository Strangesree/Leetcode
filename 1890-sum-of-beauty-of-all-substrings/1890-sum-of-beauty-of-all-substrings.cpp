class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;
        int maxi = 0;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            unordered_map<char,int> mp;
            for(int j = i;j<n;j++){
                mp[s[j]]++;
                for(auto &it:mp){
                    maxi = max(maxi,it.second);
                    mini = min(mini,it.second);
                }
                ans += (maxi-mini);
                maxi = 0;
                mini = INT_MAX;
            }
            mp.clear();
        }
        return ans;

    }
};