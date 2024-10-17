 vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        // Code here
        int v=adj.size();
        vector<int>ans;
        vector<int>vis(v,0);
        vis[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto it : adj[node]){
                if(!vis[it]){
                vis[it]=1; 
                q.push(it);
                }
            }
        }
        return ans;
    }
