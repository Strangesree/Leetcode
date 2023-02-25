class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int mini=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<prices[mini])
            {
                mini=i;
                continue;
            }
            ans=max(ans,prices[i]-prices[mini]);
        }
        return ans;
    }
};