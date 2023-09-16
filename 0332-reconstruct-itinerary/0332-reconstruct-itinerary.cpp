class Solution {
public:
    unordered_map<string,vector<string>> adj;
    vector<string> result;
    int notickets = 0;
    bool dfs(string from,vector<string>& path){
        path.push_back(from);
        if(path.size()==notickets+1){
            result = path;
            return true;
        }
        vector<string> &neigh = adj[from];
        for(int i=0;i<neigh.size();i++){
            string to = neigh[i];
            //remove to elimiate cycles
            neigh.erase(neigh.begin()+i);
            if(dfs(to,path)==true)
                return true;
            neigh.insert(neigh.begin()+i,to); // kinda backtracking
        }
        path.pop_back();
        return false;
    }
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        // here we need to use all edges and it's called eulerian circuit
        // we need to use all the tickets
        notickets = tickets.size(); 
        for(auto &t: tickets){
            string u = t[0];
            string v = t[1];
            adj[u].push_back(v);
        }
        //sort the lexical order
        for(auto &edges: adj){
            sort(begin(edges.second),end(edges.second));
        }
        vector<string> path;
        dfs("JFK",path);
        return result;
    }
};