class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        unordered_map<char,int> mp;
        int n = s.size();
        int left = 0;
        int right = 0;
        while(right<n){
             mp[s[right]]++;
             if(mp[s[right]]>1){
                 char temp = s[right];
                 while(left<n && mp[temp]!=1){
                     mp[s[left]]--;
                     left++;
                 }
                 ans = max(ans,right-left+1);
             }
             ans = max(ans,right-left+1);
             right++;
        }
        return ans;
    }
};