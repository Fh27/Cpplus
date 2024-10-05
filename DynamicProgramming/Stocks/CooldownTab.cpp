int stockProfit(vector<int> &values){
    // Write your code here.
    int n=values.size();
     vector<vector<long>>dp(n+2,vector<long>(2,0));
    //n-1 to 0  0 to 1
    dp[n][0]=dp[n][1]=0;
    for(int ind=n-1 ;ind>=0;ind--){
            long profit=0;
                profit=max(values[ind]+dp[ind+2][1],dp[ind+1][0]);
                dp[ind][0]=profit;
                profit=max(-values[ind]+dp[ind+1][0],dp[ind+1][1]);
                dp[ind][1]=profit;
                   
    }
    return dp[0][1];
