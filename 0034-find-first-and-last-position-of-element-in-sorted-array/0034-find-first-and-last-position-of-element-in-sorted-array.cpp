class Solution {
public:
    int helper(vector<int>& arr,int k,int low,int high,bool leftbais)
    {
        int ans=-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]>k)
                high=mid-1;
            else if(arr[mid]<k)
                low=mid+1;
            else
            {
                ans=mid;
                if(leftbais)
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0)
            return {-1,-1};
        vector<int> ans={-1,-1};
        int left=helper(nums,target,0,n-1,true);
        int right=helper(nums,target,0,n-1,false);
        ans[0]=left;
        ans[1]=right;
        return ans;
    }
};