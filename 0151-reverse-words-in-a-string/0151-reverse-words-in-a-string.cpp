class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(!ans.empty())
                    st.push(ans);
                ans="";
            }
            else
                ans+=s[i];
        }
        st.push(ans);
        ans="";
        while(!st.empty())
        {
            if(!ans.empty())
                ans+=' ';
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};