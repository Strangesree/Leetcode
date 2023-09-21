class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int size = m+n;
        int even = 0, mid;
        if(size%2 == 0){
            even = 1;
            mid = size/2;
        }
        else
            mid = size/2 + 1;
        int i = 0,j = 0,k = 0,ans = 0;
        while(k<mid && i<n && j<m){
            if(nums1[i] <= nums2[j])
                ans = nums1[i++];
            else
                ans = nums2[j++];
            k++;
        }
        while(k<mid){
            if(i<n)
                ans = nums1[i++];
            else 
                ans = nums2[j++];
            k++;
        }
        if(!even)
            return (double)ans;
        else{
            double x = ans,y;
            if(i<n && j==m)
                y = nums1[i];
            else if(j<m && i==n)
                y = nums2[j];
            else if(nums1[i] <= nums2[j])
                y = nums1[i];
            else
                y = nums2[j];
            
            return (x+y)/2;
        }
    }
};