#include <bits/stdc++.h> 
// int f(vector<int>&num,int ind,int x,vector<vector<int>>&dp){
//     if(ind==0) {
//         if(x % num[0]==0) return x/num[0];
//          return 1e9;
//     }
//     if(dp[ind][x]!=-1) return dp[ind][x];
//     int unpick=0+f(num,ind-1,x,dp);
//     int pick=INT_MAX;
//     if(num[ind]<=x) pick=1+f(num,ind,x-num[ind],dp);
//     return min(pick,unpick);
// }
int minimumElements(vector<int> &num, int x)
{
    int n=num.size();
    vector<vector<int>>dp(n,vector<int>(x+1,0));
    for(int i=0;i<=x;i++){
        if(i % num[0]==0) dp[0][i]= i/num[0];
        else dp[0][i]=  1e9;
    }
    for(int ind=1;ind<n;ind++){
        for(int t=0;t<=x;t++){
            int unpick=0+dp[ind-1][t];
            int pick=INT_MAX;
            if(num[ind]<=t) pick=1+dp[ind][t-num[ind]];
            dp[ind][t]= min(pick,unpick);
        }
    }
    int ans=dp[n-1][x];
    if(ans>=1e9) return -1;
    else return ans;
}
