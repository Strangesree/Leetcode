class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitude(n+1,0);
        for(int i=0;i<n;i++)
            altitude[i+1]=altitude[i]+gain[i];
        int ans = 0;
        for(int i=0;i<n+1;i++){
            ans = max(ans,altitude[i]);
        }
        return ans;
    }
};