class Solution {
public:
    int mod = 1e9+7;
    int dp[52][102][52];
    int helper(int n,int m,int k,int ind,int prev,int cost){
        if(cost>k)
            return 0;
        if(ind==n)
            return cost==k;
        if(dp[ind][prev][cost]!=-1)
            return dp[ind][prev][cost];
        long long ans = 0;
        for(int i=1;i<=m;i++){
            if(i>prev){
                ans += helper(n,m,k,ind+1,i,cost+1);
                ans%= mod;
            }
            else{
                ans += helper(n,m,k,ind+1,prev,cost);
                ans %= mod;
            }
        }
        return dp[ind][prev][cost] = ans;
    }
    int numOfArrays(int n, int m, int k) {
        memset(dp,-1,sizeof(dp));
        return helper(n,m,k,0,0,0);
    }
};