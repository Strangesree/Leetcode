class Solution {
public:
    int maxArea(vector<int>& height) {
        // int start=0;
        // int ans=0;
        // int n=height.size();
        // int end=n-1;
        // while(start<=end)
        // {
        //     int val=end-start;
        //     int mini=min(height[end],height[start]);
        //     ans=max(ans,val*mini);
        //     if(height[start]<height[end])
        //         start++;
        //     else
        //         end--;
        // }
        // return ans;
        int ans = 0, n = height.size();
       int i = 0, j = n-1;
       while(i<j){
           if(height[i]>height[j]){
               ans = max(ans, (j-i)*height[j]);
               j--;
           }
           else{
               ans = max(ans, (j-i)*height[i]);
               i++;
           }
       }
       return ans;
    }
};