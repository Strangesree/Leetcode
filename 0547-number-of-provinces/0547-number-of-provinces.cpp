class Solution {
public:
    void dfs(vector<vector<int>> &adjMat, int i, vector<int> &visited) {
        visited[i] = 1;

        for (int j=0; j<adjMat[i].size(); j++){
            if (i!=j && adjMat[i][j] && visited[j] == 0){
                dfs(adjMat, j, visited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
            int provinces = 0, n = isConnected.size();

            vector<int> visited(n, 0);

            for (int i=0; i<n; i++) {
                isConnected[i][i] = 0; 
                if (!(visited[i])) dfs(isConnected, i, visited), provinces++;
                
            }
            
        return provinces;
    }
};