#include<bits/stdc++.h>
long f(int ind,int buy,long *values,int n,vector<vector<long>>&dp){
    if(ind==n) return 0;
    if(dp[ind][buy]!=-1) return dp[ind][buy];
        long profit=0;
    if(buy){
        profit=max(-values[ind]+f(ind+1,0,values,n,dp),0+f(ind+1,1,values,n,dp));
    }else{
        profit=max(values[ind]+f(ind+1,1,values,n,dp),f(ind+1,0,values,n,dp));
    }
    return profit;
}
long getMaximumProfit(long *values, int n)
{
    //Write your code here
    // vector<vector<long>>dp(n+1,vector<long>(2,0));
    // vector<long>curr(2,0),prev(2,0);
    long aheadbuy=0,aheadnotbuy=0,currbuy,currnotbuy;
    //n-1 to 0  0 to 1
    for(int ind=n-1 ;ind>=0;ind--){
            long profit=0;
                profit=max(values[ind]+aheadbuy,aheadnotbuy);
                currnotbuy=profit;
                profit=max(-values[ind]+aheadnotbuy,aheadbuy);
            currbuy= profit;
        aheadnotbuy=currnotbuy;
        aheadbuy=currbuy;
    }
    // return f(0,1,values,n,dp);
    return aheadbuy;
}
