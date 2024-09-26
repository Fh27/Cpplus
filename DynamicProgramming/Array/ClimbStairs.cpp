#include <bits/stdc++.h>
// int f(int ind,vector<int>&dp){
//     if(ind==0) return 1;
//     if(ind==1) return 1;
//     if(dp[ind]!=-1) return dp[ind];
//     int l=f(ind-1,dp);
//     int r=f(ind-2,dp);
//     return l+r;              --- MOD use karna tha
// } 
int mod=1000000007;
int countDistinctWays(int nStairs) {
    //  Write your code here.
    // vector<long long>dp(nStairs+1,0);
    // dp[0]=1;
    // dp[1]=1;
    long long prev2=1;
    long long prev=1;
    long long curr;
    for(int i=2;i<=nStairs;i++){
        curr=(prev+prev2)%mod;
        prev2=prev;
        prev=curr;
            
    }
    // return f(nStairs,dp);
    return prev;
}
