// #include<bits/stdc++.h>
// class Solution {
// public:
//     vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
//         int n = nums.size();
//     vector<int> result(n - k + 1);

//     map<int, int> minHeap;
//     map<int, int, greater<int>> maxHeap;

//     for (int i = 0; i < n; i++) {
//         int num = nums[i];

//         // Add the new element to the minHeap
//         minHeap[num]++;

//         // Remove the element that is out of the window
//         if (i >= k) {
//             int outOfWindow = nums[i - k];
//             minHeap[outOfWindow]--;
//             if (minHeap[outOfWindow] == 0) {
//                 minHeap.erase(outOfWindow);
//             }
//         }

//         // Get the xth smallest element in the window
//         if (i >= k - 1) {
//             int count = 0;
//             int beautifulValue = 0;

//             for (auto it = minHeap.begin(); it != minHeap.end(); it++) {
//                 count += it->second;
//                 if (count >= x) {
//                     beautifulValue = it->first;
//                     break;
//                 }
//             }

//             result[i - k + 1] = beautifulValue < 0 ? beautifulValue : 0;
//         }
//     }

//     return result;
//     }
// };


class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<k-1;i++)   // to avoid the again to compute the first time min
            mp[nums[i]]++;
        vector<int> ans;
        for(int i=k-1;i<nums.size();i++){
            mp[nums[i]]++;
            int count = 0;
            int num = 0;
            for(auto s:mp){
                count += s.second;
                if(count>=x){
                    num = min(num,s.first);
                    break;
                }
            }
            ans.push_back(num);
            mp[nums[i-k+1]]--;
            if(mp[nums[i-k+1]]==0)
                mp.erase(nums[i-k+1]);
        }
        return ans;
    }
};