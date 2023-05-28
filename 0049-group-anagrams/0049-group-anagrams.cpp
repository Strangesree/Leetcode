class Solution {
public:
    string strsort(string s){
        int counter[26] = {0};
        for(char c:s)
            counter[c-'a']++;
        string t;
        for(int c=0;c<26;c++){
            t += string(counter[c],c+'a');    //construct counter copies of char
        }
        return t;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>mp;
        for(int i = 0 ; i < strs.size() ; i++)
        {
            string s = strs[i];
            // sort(strs[i].begin(),strs[i].end());
            mp[strsort(s)].push_back(s);
        }
        for(auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};