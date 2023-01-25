class Solution {
public:
    void myreverse(vector<int>& nums,int start,int end)
    {
        while(start<=end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k){
        int n=nums.size();
        if(n==0 || n==1) 
            return;
        if(k>n)
            k=k%n;
        myreverse(nums,0,n-k-1);
        myreverse(nums,n-k,n-1);
        myreverse(nums,0,n-1);
    }
};