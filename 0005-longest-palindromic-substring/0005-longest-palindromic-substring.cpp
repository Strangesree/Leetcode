class Solution {
public:
    string longestPalindrome(string s) {
        string s1=""; //Resulting String
        int len=0;
        for(int i=0;i<s.length();i++)
        {
            //for checking Odd length palindrome
            int l,r;
            l=r=i;
            while(l>=0 && r<s.length() && s[l]==s[r])
            {   
                if((r-l+1)>len)
                {
                    s1=s.substr(l,r-l+1); //taking the palindrome part
                    len=r-l+1;
                }
                l--;
                r++;
            }

            //for checking Even length palindrome
            l=i;
            r=l+1;
            while(l>=0 && r<s.length() && s[l]==s[r])
            {
                if((r-l+1)>len)
                {
                    s1=s.substr(l,r-l+1); //taking the palindrome part
                    len=r-l+1;
                }
                l--;
                r++;
            }
        }
        return s1;
    }
};