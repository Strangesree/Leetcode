class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // Find the longest continuous sub array that has exactly 2 distinct elements
        int ans=0;
        unordered_map<int,int> mp;   // dynamic sliding window
        int n=fruits.size();
        int start=0;
        int end=0;
        while(end<n)
        {
            mp[fruits[end]]++;
            if(mp.size()<=2)
                ans=max(ans,end-start+1);
            else
            {
                mp[fruits[start]]--;
                if(mp[fruits[start]]==0)
                    mp.erase(fruits[start]);
                start++;
            }
            end++;
        }
        return ans;
    }
};