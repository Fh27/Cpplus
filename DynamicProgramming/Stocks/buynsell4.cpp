#include <bits/stdc++.h> 
// int f(int ind,int trns,int n,int k,vector<int>&prices){
//     if(ind==n || trns==2*k) return 0;
//     int proft=0;
//     if(trns%2==0){
//         proft=max(-prices[ind]+f(ind+1,trns+1,n,k,prices),f(ind+1,trns,n,k,prices));
//     }else{
//         proft=max(prices[ind]+f(ind+1,trns+1,n,k,prices),f(ind+1,trns,n,k,prices));
//     }
//     return proft;
// }
int maximumProfit(vector<int> &prices, int n, int k)
{
    // Write your code here.
    vector<vector<int>>dp(n+1,vector<int>(2*k+1,0));
    vector<int>after(2*k+1,0);
    vector<int>curr(2*k+1,0);
    for(int ind=n-1;ind>=0;ind--){
        for(int trns=2*k-1;trns>=0;trns--){
             int proft=0;
            if(trns%2==0){
                proft=max(-prices[ind]+after[trns+1],after[trns]);
            }else{
                proft=max(prices[ind]+after[trns+1],after[trns]);
            }
            curr[trns]= proft;
        }
        after=curr;
    }
    return after[0];
    // return f(0,0,n,k,prices);
}
