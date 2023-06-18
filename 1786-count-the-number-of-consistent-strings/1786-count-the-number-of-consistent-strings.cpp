class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool mp[26]={};
        for(char c:allowed)
            mp[c-'a'] = true;
        int count = 0;
        for(string word:words){
            int j;
            for(j=0;j<word.size();j++){
                if(!mp[word[j]-'a'])
                    break;
            }
            if(j==word.size())
                count++;
        }
        return count;
    }
};