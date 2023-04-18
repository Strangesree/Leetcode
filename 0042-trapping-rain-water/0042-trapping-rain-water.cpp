class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left1[n],right1[n];
        left1[0]=height[0];
        for(int i=1;i<n;i++)
            left1[i]=max(left1[i-1],height[i]);
        right1[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--)
            right1[i]=max(right1[i+1],height[i]);
        int ans=0;
        for(int i=1;i<n-1;i++)
        {
            ans+=min(left1[i],right1[i])-height[i];
        }
        return ans;
    }
};