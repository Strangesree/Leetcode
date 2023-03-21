class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        // long long ans=0;
        // int start=0;
        // int end=0;
        // int n=nums.size();
        // while(end<n)
        // {
        //     if(nums[end]==0)
        //     {
        //         start=end;
        //         while(end<n && nums[end]==0)
        //             end++;
        //         long long val=end-start;
        //         ans+=(val*(val+1))/2;
        //     }
        //     else
        //         end++;
        // }
        // return ans;
        long long ans=0 , c=0;
        for(int i =0;i<=nums.size();i++){
            if(i<nums.size() && nums[i]==0 ) c++;
            else if(c != 0){
                ans +=(c*(c+1)/2);
                c=0;
            }
        } 
        return ans;
    }
};