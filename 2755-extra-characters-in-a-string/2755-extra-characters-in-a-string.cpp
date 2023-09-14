class Solution {
public:
    int helper(string s,unordered_map<string,int> &mp,vector<int> &dp,int ind){
        if(ind>=s.size())
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        string curstr = "";
        int ans = s.size();
        for(int curind = ind;curind<s.size();curind++){
            curstr.push_back(s[curind]);
            int count = ((mp.count(curstr))? 0:curstr.size()) +
                        helper(s,mp,dp,curind+1);
            ans = min(count,ans);
        }
        return dp[ind] = ans;
    }
    int minExtraChar(string s, vector<string>& dict) {
        vector<int> dp(s.size(),-1);
        unordered_map<string,int> mp;
        for(string &word:dict){
            mp[word]++;
        }
        int ans = helper(s,mp,dp,0);
        return ans;
    }
};