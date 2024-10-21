class Solution {
    private :
    int timer=1;

public:
    void dfs(int node,int parent, vector<int>adj[],int low[],int tin[],vector<int>&vis,vector<vector<int>>&bridge){
        vis[node]=1;
        tin[node]=low[node]=timer;
        timer++;
        for(auto it:adj[node]){
            if(it==parent) continue;
            if(!vis[it]){
                dfs(it,node,adj,low,tin,vis,bridge);
                low[node]=min(low[node],low[it]);
                if(low[it]>tin[node]){
                    bridge.push_back({it,node});
                }
            }else{
                low[node]=min(low[it],low[node]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
    int low[n];
    int tin[n];
    vector<int>vis(n,0);
    vector<vector<int>>bridge;
    vector<int>adj[n];
    for(auto it: connections){
        adj[it[0]].push_back(it[1]);
        adj[it[1]].push_back(it[0]);
    }    
    dfs(0,-1,adj,low,tin,vis,bridge);
    return bridge;
    }
};
