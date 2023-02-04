class Solution {
public:
    void rev(string &s,int start,int end)
    {
        while(start<=end)
        {
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
    string reverseWords(string s) {
        int start=0;
        int end=0;
        for(int i=0;i<s.size();i++)
        {
            end=i;
            if(s[i]==' '|| s[i+1]=='\0')
            {
                if(s[i+1]=='\0')
                    rev(s,start,end);
                else
                    rev(s,start,end-1);
                start=end+1;
            } 
        }
        return s;
    }
};