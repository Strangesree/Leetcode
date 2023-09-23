class Solution {
public:
    static bool comp(const string &a,const string &b){
        return a.size()<b.size();
    }
    bool compare(string &a,string &b){
        int i = 0;
        int j = 0;
        if(a.size()!=b.size()+1)
            return false;
        while(i<a.size()){
            if(j<b.size() && a[i]==b[j]){
                i++;
                j++;
            }
            else
                i++;
        }
        if(a.size()==i && b.size()==j)
            return true;
        return false;
    }
    int longestStrChain(vector<string>& words) {
        int n = words.size();
        vector<int> dp(n,1);
        int ans = 0;
        sort(words.begin(),words.end(),comp);
        for(int i=0;i<n;i++){
            for(int prev = 0;prev<i;prev++){
                if(compare(words[i],words[prev]) && 1+dp[prev]>dp[i])
                    dp[i] = 1+dp[prev];
            }
            if(dp[i]>ans)
                ans = dp[i];
        }
        return ans;
    }
};