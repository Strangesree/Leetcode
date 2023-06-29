class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        vector<int> sample(3,0);
        int n = nums.size();
        int start, end;
        for(int i=0;i<n;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                start = i+1;
                end = n-1;
            }
            int sum = 0-nums[i];
            while(start<end){
                if((nums[start]+nums[end])==sum && start!=end){
                    sample[0]=nums[i];
                    sample[1]=nums[start];
                    sample[2]=nums[end];
                    ans.push_back(sample);
                    while(start<end && nums[start]==nums[start+1]) start++;
                    while(start<end && nums[end]==nums[end-1]) end--;
                    start++;
                    end--; 
                }
                else if(nums[start]+nums[end] < sum)
                    start++;
                else
                    end--;
            }
        }
        return ans;
    }
};