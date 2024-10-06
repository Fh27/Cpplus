int knapSack(int n, int w, int profit[], int weight[])
    {
        
    vector<int>prev(w+1,0);
    vector<int>curr(w+1,0);
    for(int W=0;W<=w;W++){
        prev[W]= ((int)(W / weight[0])) * profit[0];
    }
    for(int ind=1;ind<n;ind++){
        for(int W=0;W<=w;W++){
             int nottake=prev[W];
                int take=0;
                if(W>=weight[ind]) take=profit[ind]+curr[W-weight[ind]];
                curr[W]= max(take,nottake);
        }
        prev=curr;
    }
    // return f(n-1,w,profit,weight,dp);
    return prev[w];
    }
