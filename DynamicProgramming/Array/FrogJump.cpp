  // int f(vector<int>&height,int ind,vector<int>&dp){
    //     if(ind==0) return 0;
    //     if(dp[ind]!=-1) return dp[ind];
    //     int single=f(height,ind-1,dp)+abs(height[ind]-height[ind-1]);
    //     int doublee=INT_MAX;                   --DECLARE KARNA !
    //     if(ind>1) doublee=f(height,ind-2,dp)+abs(height[ind]-height[ind-2]);       -- Out of Boundd
    //     return min(single,doublee);
    // }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        // vector<int>dp(n,-1);
        vector<int>dp(n+1,0);
        dp[0]=0;
        for(int ind=1;ind<n;ind++){
        int single=dp[ind-1]+abs(height[ind]-height[ind-1]);
        int doublee=INT_MAX;
        if(ind>1) doublee=dp[ind-2]+abs(height[ind]-height[ind-2]);
        dp[ind]= min(single,doublee);
        }
        // return f(height,n-1,dp);
        return dp[n-1];
    }
