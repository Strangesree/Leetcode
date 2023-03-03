class Solution {
public:
    int strStr(string haystack, string needle) {
        int i=0; 
        int j=0;
        int n=needle.size()-1;
        int m=haystack.size();
        int ans=0;
        if(m<n)
            return -1;
        while(i<m)
        {
            if(haystack[i]==needle[j])
            {
                ans=i;
                while(j<=n && haystack[i]==needle[j])
                {
                    i++;
                    j++;
                }
                if(j>n)
                    return ans;
                j=0;
                i=ans+1;
            }
            else
                i++;
        }
        return -1;
    }
};