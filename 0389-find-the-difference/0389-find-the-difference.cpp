class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        if(s.size()==0)
            return t[0];
        if(t.size()==0)
            return s[0];
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        for(int i=0;i<t.size();i++)
            mp[t[i]]++;
        char ans;
        for(auto i:mp)
        {
            if(i.second%2!=0)
                ans=i.first;
        }
        return ans;
    }
};