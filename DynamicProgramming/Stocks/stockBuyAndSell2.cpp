int f(int ind,int buy,int n,vector<int>& prices,vector<vector<int>>&dp){
        if(ind==n) return 0;
        if(dp[ind][buy]!=-1) return dp[ind][buy];
        int profit=0;
        if(buy){
            profit=max(-prices[ind]+f(ind+1,0,n,prices,dp),f(ind+1,1,n,prices,dp));
        }else{
            profit=max(prices[ind]+f(ind+1,1,n,prices,dp),f(ind+1,0,n,prices,dp));
        }
        return dp[ind][buy]=profit;
    }
    int stockBuyAndSell(int n, vector<int> &prices) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        for(int i=0;i<=1;i++){
            dp[n][i]=0;
        }
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                int profit=0;
        if(buy){
            profit=max(-prices[ind]+dp[ind+1][0],dp[ind+1][1]);
        }else{
            profit=max(prices[ind]+dp[ind+1][1],dp[ind+1][0]);
        }
        dp[ind][buy]=profit;
            }
        }
