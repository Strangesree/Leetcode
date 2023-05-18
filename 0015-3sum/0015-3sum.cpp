class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        vector<int> sample(3,0);
        int n = nums.size();
        for(int i=0;i<n;i++){
            int val = nums[i];
            int start = i+1;
            int end = n-1;
            
            while(start<end){
                if((nums[start]+nums[end]+val)==0 && start!=end){
                    sample[0]=nums[i];
                    sample[1]=nums[start];
                    sample[2]=nums[end];
                    ans.insert(sample);
                    start++;
                    end--; 
                }
                else if(nums[start]+nums[end]+val < 0)
                    start++;
                else
                    end--;
            }
        }
        vector<vector<int>> ans1;
        ans1.assign(ans.begin(),ans.end());
        return ans1;
    }
};