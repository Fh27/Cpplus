 void dfs(int node,vector<int>adjls[],vector<int>&vis){
        vis[node]=1;
        for(int it:adjls[node]){
            if(!vis[it]){
                dfs(it,adjls,vis);
            }
        }
    }
    void bfs(int node,vector<int>adjls[],vector<int>&vis){
        vis[node]=1;
        queue<int>q;
        q.push(node);
        while(!q.empty()){
            int i=q.front();
            q.pop();
            for(int it:adjls[i]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
       
        vector<int>adjls[V];
        //convert 2d adj to 1d adjlist
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }
        //0 to V 
        vector<int>vis(V,0);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                cnt++;
                bfs(i,adjls,vis);  //u can make either calls dfs or bfs
            }
        }
        return cnt;
    }
