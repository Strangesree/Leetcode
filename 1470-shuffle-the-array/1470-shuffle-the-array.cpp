class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int x=0;
        int y=n;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[x]);
            x++;
            ans.push_back(nums[y]);
            y++;
        }
        return ans;
    }
};