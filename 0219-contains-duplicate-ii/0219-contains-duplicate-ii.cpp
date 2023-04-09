class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // unordered_map<int,int> mp;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        //     mp[nums[i]]++;
        // for(int i=0;i<n;i++)
        // {
        //     if(mp[nums[i]]>1)
        //     {
        //         for(int j=i+1;j<n;j++)
        //             if(nums[i]==nums[j] && abs(i-j)<=k)
        //                 return true;
        //     }
        // }
        // return false;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]))
            {
                if(abs(i-mp[nums[i]])<=k)
                    return true;
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};