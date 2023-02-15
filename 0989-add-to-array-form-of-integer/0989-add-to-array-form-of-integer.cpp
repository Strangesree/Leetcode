class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n=num.size();
        int carry=0;
        vector<int> ans;
        for(int i=n-1;i>=0;i--)
        {
            int rem=k%10;
            k=k/10;
            int val=num[i]+rem+carry;
            if(val<10)
            {
                ans.push_back(val);
                carry=0;
            }
            else
            {
                int rem2=val%10;
                carry=val/10;
                ans.push_back(rem2);
            }
        }
        while(carry!=0 && k!=0)
        {
            int rem=k%10;
            k=k/10;
            int val=carry+rem;
            if(val<10)
            {
                ans.push_back(val);
                carry=0;
            }
            else
            {
                int rem2=val%10;
                carry=val/10;
                ans.push_back(rem2);
            }
        }
        if(carry!=0)
            ans.push_back(carry);
        while(k!=0)
        {
            int rem=k%10;
            k=k/10;
            ans.push_back(rem);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};