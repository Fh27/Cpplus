int f(int k,vector<int>&arr,int ind,vector<int>&dp){
        if(ind==0) return 0;
        int mini=INT_MAX;
        if(dp[ind]!=-1) return dp[ind];
        for(int j=1;j<=k;j++){
          if(ind>=j){
          int jumps=f(k,arr,ind-j,dp)+abs(arr[ind]-arr[ind-j]);
            mini=min(jumps,mini);
          }  
        }
        return dp[ind]= mini;
    }
    int minimizeCost(int k, vector<int>& arr) {
        int n=arr.size();
        // vector<int>dp(n,-1);
        vector<int>dp(n,0);
        dp[0]=0;
        for(int ind=1;ind<n;ind++){
            int mini=INT_MAX;                     // mini is updated for every indices
            for(int j=1;j<=k;j++){
              if(ind>=j){                         // --declare karna 
              int jumps=dp[ind-j]+abs(arr[ind]-arr[ind-j]);
              mini=min(jumps,mini);
              }  
            }
            dp[ind]= mini;
        }
        return dp[n-1];
}
