class Solution {
public:
    int minMoves2(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n==1)
            return 0;
        int ans = INT_MAX;
            int val = arr[n/2-1];
            int val2 = arr[n/2];
            int temp1 = 0;
            int temp2 = 0;
            for(int i=0;i<n;i++){
                temp1 += abs(val-arr[i]);
                temp2 += abs(val2-arr[i]);
            }
            if(n%2==0){
                ans = min(temp1,min(temp2,ans));
            }
            else{
                ans = min(temp2,ans);
            }
            return ans;
    }
};