void dfs(int node,vector<vector<int>>& adj,vector<int>&vis,vector<int>&ans){
        vis[node]=1;
        ans.push_back(node);
        for(int it:adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,ans);
            }
        }
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        // Code here
        int v=adj.size();
        vector<int>ans;
        vector<int>vis(v,0);
        dfs(0,adj,vis,ans);
        return ans;
    }
