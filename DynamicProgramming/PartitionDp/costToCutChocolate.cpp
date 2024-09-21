#include <bits/stdc++.h> 
    int f(int i,int j,vector<int>&cuts,vector<vector<int>>&dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int ans=INT_MAX;
        for(int ind=i;ind<=j;ind++){
        int cost=cuts[j+1]-cuts[i-1]+f(i,ind-1,cuts,dp)+f(ind+1,j,cuts,dp);
        ans=min(ans,cost);
        }
        return dp[i][j]=ans;
    }
int cost(int n, int c, vector<int> &cuts){
    // Write your code here.
    cuts.push_back(n);
    cuts.insert(cuts.begin(),0);
    sort(cuts.begin(),cuts.end());
    vector<vector<int>>dp(c+2,vector<int>(c+2,0));
    for(int i=c;i>=1;i--){
        for(int j=1;j<=c;j++){
            if(i>j) continue;
        int ans=INT_MAX;
        for(int ind=i;ind<=j;ind++){
        int cost=cuts[j+1]-cuts[i-1]+dp[i][ind-1]+dp[ind+1][j];
        ans=min(ans,cost);
        }
         dp[i][j]=ans;
        }
    }
    return dp[1][c];
    // return f(1,c,cuts,dp);
}
