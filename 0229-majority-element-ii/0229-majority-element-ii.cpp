class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        if(n==1) return {nums[0]};
        int ele1 = INT_MIN,count1 = 0;
        int ele2 = INT_MIN,count2 = 0;
        for(int i=0;i<n;i++){
            if(count1==0 && ele2!=nums[i]){
                ele1 = nums[i];
                count1 = 1;
            }
            else if(count2==0 && ele1!=nums[i]){
                ele2 = nums[i];
                count2 = 1;
            }
            else if(ele1==nums[i]) count1++;
            else if(ele2==nums[i]) count2++;
            else{
                count1--;
                count2--;
            }
        }
        count2 = 0;
        count1 = 0;
        for(int i=0;i<n;i++){
            if(ele1==nums[i]) count1++;
            if(ele2==nums[i]) count2++;
        }
        if(count1>n/3)
            ans.push_back(ele1);
        if(count2>n/3)
            ans.push_back(ele2);
        return ans;
    }
};