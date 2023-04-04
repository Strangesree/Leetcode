class Solution {
public:
    int partitionString(string s) {
        set<char> ss;
        int ans=1;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ss.find(ch)!=ss.end())
            {
                ss.clear();
                ans++;
            }
            ss.insert(ch);
        }
        return ans;
    }
};