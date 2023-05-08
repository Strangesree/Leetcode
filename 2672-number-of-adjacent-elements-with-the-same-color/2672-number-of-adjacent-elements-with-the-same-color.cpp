class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        int ans = 0;
        vector<int> color(n,0);
        vector<int> anss;
        int index,newcolor;
        for(int i=0;i<queries.size();i++)
        {
            index = queries[i][0];
            newcolor = queries[i][1];
            
            int leftside = index-1 < 0 ? 0:color[index-1];
            int rightside = index+1 > n-1 ? 0:color[index+1];
            
            // before updating 
            if(color[index]!=0 && leftside==color[index])
                ans--;
            if(color[index]!=0 && rightside==color[index])
                ans--;
            
            color[index]=newcolor;
            
            //after updating
            if(color[index]!=0 && leftside==color[index])
                ans++;
            if(color[index]!=0 && rightside==color[index])
                ans++;
            anss.push_back(ans);
        }
        return anss;
    }
};