class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<arr1.size();i++)
            mp[arr1[i]]++;
        for(int i=0;i<arr2.size();i++)
        {
            while(mp[arr2[i]]!=0)
            {
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
            if(mp[arr2[i]]==0)
                mp.erase(arr2[i]);
        }
        vector<int> sample;
        for(auto i:mp)
        {
            while(i.second!=0)
            {
                sample.push_back(i.first);
                i.second--;
            }
        }    
        sort(sample.begin(),sample.end());
        for(int s=0;s<sample.size();s++)
            ans.push_back(sample[s]);
        return ans;
    }
};