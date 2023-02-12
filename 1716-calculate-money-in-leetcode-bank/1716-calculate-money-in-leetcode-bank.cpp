class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int cost=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(i%7==0)
            {
                cost++;
                j=0;
            }
            sum=sum+cost+j;
            j++;
        }
        return sum;
    }
};