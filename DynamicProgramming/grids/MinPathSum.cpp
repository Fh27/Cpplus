#include <bits/stdc++.h> 
// int f(vector<vector<int>> &grid,int i,int j,vector<vector<int>>&dp){
//     if(i==0 && j==0) return grid[i][j];
//     if(i<0 || j<0) return 1e9;
//     if(dp[i][j]!=-1) return dp[i][j];
//     int up=grid[i][j]+f(grid,i-1,j,dp);
//     int left=grid[i][j]+f(grid,i,j-1,dp);
//     return min(up,left);
//     }
int minSumPath(vector<vector<int>> &grid) {
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>>dp(n,vector<int>(m,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0)  dp[i][j]=grid[i][j];
            else{

             int up=grid[i][j];
            if(i>0) up+=dp[i-1][j];
            else up+=1e9;
            int left=grid[i][j];
            if(j>0) left+=dp[i][j-1];
            else left+=1e9;
            dp[i][j]= min(up,left);
            }
        }
    }
    // return f(grid,n-1,m-1,dp);
    return dp[n-1][m-1];
}
