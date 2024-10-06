#include<bits/stdc++.h>
long f(int ind,int value,int * denominations,vector<vector<long>>&dp){
    if(ind==0){
        return (value%denominations[ind]==0);
    }
    if(dp[ind][value]!=-1) return dp[ind][value];
    long nottake=f(ind-1,value,denominations,dp);
    long take=0;
    if(denominations[ind]<=value) take=f(ind,value-denominations[ind],denominations,dp);
    return take +nottake;
}

long countWaysToMakeChange(int *denominations, int n, int value)
{
    vector<vector<long>>dp(n,vector<long>(value+1,0));
    vector<long>prev(value+1,0);
    vector<long>curr(value+1,0);

    for(int val=0;val<=value;val++){
        prev[val]=(val%denominations[0]==0);
    }
    for(int ind=1;ind<n;ind++){
        for(int val=0;val<=value;val++){
            long nottake=prev[val];
            long take=0;
            if(denominations[ind]<=val) take=curr[val-denominations[ind]];
            curr[val]= take +nottake;
        }
        prev=curr;
    }
    // return f(n-1,value,denominations,dp);
    return prev[value];
}
