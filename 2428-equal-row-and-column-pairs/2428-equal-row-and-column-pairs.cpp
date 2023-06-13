class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count=0;
        int n=grid.size();
        unordered_map<string,int> mp;
        for(int i=0; i<n;i++){
            string temp="";
            for(int j:grid[i])
                temp += to_string(j)+"#";
            mp[temp]++;
        }
        for(int i=0; i<n;i++){
            string ans="";
            //Traversing the matrix column wise and generating new key 
            for(int j=0; j<n;j++)
                ans+=to_string(grid[j][i])+"#";
            // adding the number of occurences of the key generated 
            count+=mp[ans];
        }
        return count;
    }
};