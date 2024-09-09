  // int f(int ind,int W, vector<int>& wt, vector<int>& val, vector<vector<int>>&dp){
    //     if(ind==0){
    //         if(wt[0]<=W) return val[0];
    //         else return 0;
    //     }
    //     if(dp[ind][W]!=-1) return dp[ind][W];
    //     int notpick=0+f(ind-1,W,wt,val,dp);
    //     int pick=INT_MIN;
    //     if(W-wt[ind]>=0) pick=val[ind]+f(ind-1,W-wt[ind],wt,val,dp);
    //     return dp[ind][W]=max(pick,notpick);
    // }
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        
        int n=wt.size();
        vector<vector<int>>dp(n,vector<int>(W+1,0));
        for(int i=wt[0];i<=W;i++){
            dp[0][i]=val[0];
        }
        for(int ind=1;ind<n;ind++){
            for(int Wt=0;Wt<=W;Wt++){
                int notpick=0+dp[ind-1][Wt];
                int pick=INT_MIN;
                if(Wt-wt[ind]>=0) pick=val[ind]+dp[ind-1][Wt-wt[ind]];
                dp[ind][Wt]=max(pick,notpick);
            }
        }
        return dp[n-1][W];
    }
