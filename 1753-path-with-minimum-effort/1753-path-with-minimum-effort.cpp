class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n = heights.size();
        int m = heights[0].size();
        // {diff,(row,col)}
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}}); 
        vector<vector<int>> dist(n,vector<int> (m,1e9));
        dist[0][0] = 0;
        int drow[4]={-1,0,1,0};
        int dcol[4]={0,1,0,-1};
        while(!pq.empty()){
            auto it = pq.top();
            pq.pop();
            int diff = it.first;
            int row = it.second.first;
            int col = it.second.second;
            if(row == n-1 && col==m-1 )
                return diff;
            for(int i=0;i<4;i++){
                int newr = row + drow[i];
                int newc = col + dcol[i];
                if(newr>=0 && newr<n && newc>=0 && newc<m){
                    int neweffort = max(abs(heights[row][col] - heights[newr][newc]),diff);
                    if(neweffort < dist[newr][newc]){
                        dist[newr][newc] = neweffort;
                        pq.push({neweffort,{newr,newc}});
                    }
                }
            }//O( E log V)
        }
        return -1;
    }
};