class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        vector<int> time(n);
        for(int i=0;i<n;i++){
            time[i] = ceil((float)dist[i]/speed[i]);   
            //ceil(a/b) = (a+b-1) / b
        }
        sort(time.begin(),time.end());
        int ans = 1;
        int timepassed = 1;
        for(int i=1;i<n;i++){
            if(time[i]-timepassed <= 0)
                return ans;
            ans++;
            timepassed++;  
        }
        return ans;
    }
};