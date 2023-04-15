class Solution {
public:
    bool isPalindrome(string s) {
        int ind=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
            {    
                s[i]=tolower(s[i]);
                s[ind++]=s[i];
            }
            else if(s[i]>='0' && s[i]<='9')
                s[ind++]=s[i];
        }
        int start=0;
        int end=ind-1;
        while(start<end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
};