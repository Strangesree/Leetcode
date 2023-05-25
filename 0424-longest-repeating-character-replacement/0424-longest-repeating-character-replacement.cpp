class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int start = 0;
        int end = 0;
        int ans = 0;
        int maxlen = 0,maxfre= 0 ;
        while(end<s.size()){
            mp[s[end]]++;
            maxfre = max(maxfre,mp[s[end]]);
            if((end-start+1)-maxfre >k){
                mp[s[start]]--;
                start++;
            }
            maxlen = max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }
};