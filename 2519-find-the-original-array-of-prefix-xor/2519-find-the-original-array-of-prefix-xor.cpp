class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int> ans(n);
        for(int i=n-1;i>0;i--){
            ans[i] = pref[i] xor pref[i-1];
        }
        ans[0] = pref[0];
        return ans;
    }
};