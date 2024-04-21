class Solution {
public:
    bool dfs(vector<vector<int>> &adj,int s,int d ,vector<bool> &vis){
        if(s==d){
            return 1;
        }
        
        bool res=0;
        vis[s]=1;
        
        for(int i=0;i<adj[s].size();i++){
            if(!vis[adj[s][i]]){
                res=res||dfs(adj,adj[s][i],d,vis);
            }
        }
        
        return res;
    }   
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        
        vector<bool> vis(n,0);
        return dfs(adj,source,destination,vis);
    }
};