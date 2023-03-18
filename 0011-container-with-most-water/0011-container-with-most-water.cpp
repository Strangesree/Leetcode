class Solution {
public:
    int maxArea(vector<int>& arr) {
        int start=0;
        int ans=0;
        int n=arr.size();
        int end=n-1;
        while(start<=end)
        {
            int val=end-start;
            int mini=min(arr[end],arr[start]);
            ans=max(ans,val*mini);
            if(arr[start]<arr[end])
                start++;
            else
                end--;
        }
        return ans;
    }
};