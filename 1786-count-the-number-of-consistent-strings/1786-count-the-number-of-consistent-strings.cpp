class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char,int> mp;
        for(int i=0;i<allowed.size();i++)
            mp[allowed[i]]++;
        int count = 0;
        for(int i=0;i<words.size();i++){
            int n = words[i].size();
            int j;
            for(j=0;j<n;j++){
                if(!mp[words[i][j]])
                    break;
            }
            if(j==n)
                count++;
        }
        return count;
    }
};