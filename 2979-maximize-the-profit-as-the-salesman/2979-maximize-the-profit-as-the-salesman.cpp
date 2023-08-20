class Solution {
public:
    vector<int> st;
    int helper(vector<vector<int>>& offer,int ind,vector<int>& dp){
        if(ind >= offer.size())
            return 0;
        if(dp[ind]!=-1) 
            return dp[ind];
        int take = 0;
        int nottake = 0;
        int val = offer[ind][1];
        int nextInd = upper_bound(st.begin(),st.end(),val)-st.begin();
        take = offer[ind][2]+helper(offer,nextInd,dp);
        nottake = helper(offer,ind+1,dp);
        return dp[ind] = max(take,nottake);
        
    }
    int maximizeTheProfit(int n, vector<vector<int>>& offers) {
        sort(offers.begin(),offers.end());
        vector<int> dp (offers.size(),-1);
        for(auto it : offers) 
            st.push_back(it[0]);
        return helper(offers,0,dp);
    }
};