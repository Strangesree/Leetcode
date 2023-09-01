class Solution {
public:
    // int findcount(int i){
    //     int temp = 0;
    //     while(i>0){
    //         int rem = i%2;
    //         if(rem==1)
    //             temp++;
    //         i = i/2;
    //     }
    //     return temp;
    // }
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        if(n==0)
            return ans;
        for(int i=1;i<=n;i++){ 
            if(i%2==0)
                ans[i] = ans[i/2];
            else
                ans[i] = ans[i-1]+1;
        }
        return ans;
    }
};