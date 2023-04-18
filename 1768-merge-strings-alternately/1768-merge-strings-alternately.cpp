class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i=0;
        int j=0;
        string ans;
        bool nowword1=true;
        while(i<n && j<m){
            if(nowword1){
                ans.push_back(word1[i++]);
                nowword1=false;
            }
            else{
                ans.push_back(word2[j++]);
                nowword1=true;
            }
        }
        while(i<n){
            ans.push_back(word1[i++]);
        }
        while(j<m){
            ans.push_back(word2[j++]);
        }
        return ans;
    }
};