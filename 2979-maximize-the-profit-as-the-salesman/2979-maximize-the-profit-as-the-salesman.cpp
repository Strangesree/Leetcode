class Solution {
public:
    vector<int> st;
    int helper(vector<vector<int>>& of, int n, int index,vector<int>& dp){
        if(index>=of.size()) return 0;
        if(dp[index]!=-1) return dp[index];
        int pick=0,nonPick=0;
        int val=of[index][1];
        int nextIndex=upper_bound(st.begin(),st.end(),val)-st.begin();
        pick=of[index][2]+helper(of,n,nextIndex,dp);
        nonPick=helper(of,n,index+1,dp);
        return dp[index]=max(pick,nonPick);
        
    }
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        sort(offers.begin(),offers.end());
        vector<int> dp (offers.size(),-1);
        for(auto it : offers) st.push_back(it[0]);
        return helper(offers,n,0,dp);
    }
};