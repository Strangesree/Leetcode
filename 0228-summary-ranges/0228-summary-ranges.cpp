class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();
        if(n==0)
            return ans;
        string temp = to_string(nums[0]);
        if(n==1){
            ans.push_back(temp);
            return ans;
        }
        for(int i=1;i<n;i++){
            if(nums[i-1]+1==nums[i])
                continue;
            else{
                if(to_string(nums[i-1])!=temp)
                {
                    temp += "->";
                    temp += to_string(nums[i-1]);
                }
                ans.push_back(temp);
                temp = to_string(nums[i]);
            }
        }
        if(temp!=""){
            if(temp != to_string(nums[n-1]))
                temp += "->"+to_string(nums[n-1]);
            ans.push_back(temp);
        }
            
        return ans;
    
    }
};