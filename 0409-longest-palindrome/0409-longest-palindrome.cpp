class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        int ans=0;
        bool isone=false;
        for(auto i:mp)
        {
            int val = i.second;
            if(val>1 && val%2==0)
                ans += val;
            else if(val>1 && val%2!=0)
            {
                ans += val-1;
                isone = true;
            }
            else 
                isone = true;
        }
        if(isone)
            ans +=1;
        return ans;
    }
};