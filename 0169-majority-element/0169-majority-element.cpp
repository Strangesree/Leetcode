class Solution {
public:
    int majorityElement(vector<int>& arr) {
        // unordered_map<int,int> mp;
        // int n=nums.size();
        // for(int i=0;i<n;i++)
        //     mp[nums[i]]++;
        // int ans;
        // for(auto i:mp)
        // {
        //     if(i.second>n/2)
        //         ans=i.first;
        // }
        // return ans;
        
        int ele=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(count==0)ele=arr[i];
            count+=(ele==arr[i])?1:-1;
        }
        return ele;
    }
};