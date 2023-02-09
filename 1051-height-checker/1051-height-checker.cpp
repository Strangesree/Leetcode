class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sample(heights.begin(),heights.end());
        sort(sample.begin(),sample.end());
        int ans=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=sample[i])
                ans++;
        }
        return ans;
    }
};