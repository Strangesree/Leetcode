class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> ans;
        unordered_map<int, int> mp;
        for(int x : nums){
            mp[x]++;
            if(mp[x]>(n/3))
                ans.insert(x);
        }
        return vector<int>(ans.begin(), ans.end());
    }
};