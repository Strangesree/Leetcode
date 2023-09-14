class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n,1),right(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1])
                left[i] = left[i-1]+1;
        }
        for(int s=n-2;s>=0;s--){
            if(ratings[s]>ratings[s+1])
                right[s] = right[s+1]+1;
        }
        int ans = 0;
        for(int s=0;s<n;s++){
            ans += max(left[s],right[s]);
        }
        return ans;
    }
}; 