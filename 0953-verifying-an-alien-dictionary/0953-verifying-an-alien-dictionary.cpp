class Solution {
public:
    unordered_map<char,int> mp;
    bool helper(string &a,string &b)
    {
        for(int i=0;i<min(a.size(),b.size());i++)
        {
            if(mp[a[i]]<mp[b[i]])
                return true;
            else if(mp[a[i]]>mp[b[i]])
                return false;
        }
        if(b.size()>=a.size())  // if a=hello and b=hellohe
            return true;
        return false;
    }
    
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0;i<order.size();i++)
            mp[order[i]]=i;
        
        for(int i=0;i<words.size()-1;i++)
        {
            if(!helper(words[i],words[i+1]))
                return false;
        }
        return true;
    }
};