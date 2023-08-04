class Solution {
public:

    bool helper(string s,unordered_set<string> &sett,vector<int> &memo,int start){
        if(start==s.size())
            return true;
        if(memo[start]!= -1)
            return memo[start];
        for(int i=start;i<s.size();i++){
            if(sett.count(s.substr(start,i+1-start)) && helper(s,sett,memo,i+1)){
                memo[start] = true;
                return true;
            }
        }
        return memo[start] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        vector<int> memo(s.size(),-1);
        unordered_set<string> sett(wordDict.begin(),wordDict.end());
        return helper(s,sett,memo,0);
    }
};