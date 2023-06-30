class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        map<int, string> dupStr;
        for(auto v : mp) {
            char c = v.first;
            int n = v.second;
            dupStr[n] += string(n, c);
        }
        
        string res;
        for(auto rit = dupStr.rbegin(); rit != dupStr.rend(); ++rit) {
            res += rit->second;
        }
        return res;
    }
};