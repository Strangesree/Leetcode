class Solution {
public:
	int dp[1002][1002][4];
	int f1(int i,int prev,int size,vector<int>& rat,int n){
		if(size==3) return 1;
		if(i==n){
			if(size==3) return 1;
			return 0;
		}
		if(dp[i][prev+1][size]!=-1) return dp[i][prev+1][size];
		int pick=0;
		if(prev==-1 || rat[i]<rat[prev]) pick=f1(i+1,i,size+1,rat,n);
		int notpick=f1(i+1,prev,size,rat,n);
		return dp[i][prev+1][size]=pick+notpick;
	}

	int f2(int i,int prev,int size,vector<int>& rat,int n){
		if(size==3) return 1;
		if(i==n){
			if(size==3) return 1;
			return 0;
		}
		if(dp[i][prev+1][size]!=-1) return dp[i][prev+1][size];
		int pick=0;
		if(prev==-1 || rat[i]>rat[prev]) pick=f2(i+1,i,size+1,rat,n);
		int notpick=f2(i+1,prev,size,rat,n);
		return dp[i][prev+1][size]=pick+notpick;
	}


	int numTeams(vector<int>& rat) {
		int n=rat.size();
		memset(dp,-1,sizeof(dp));
		int a=f1(0,-1,0,rat,n);
		memset(dp,-1,sizeof(dp));
		int b=f2(0,-1,0,rat,n);
		return a+b;
	}
};