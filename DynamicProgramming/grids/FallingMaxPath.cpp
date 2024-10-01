#include <bits/stdc++.h> 
// int f(vector<vector<int>> &matrix,int i,int j,vector<vector<int>>&dp){
//     int m=matrix[0].size();
//     if(j<0 || j>=m) return -1e8; 
//     if(i==0) return matrix[0][j];
//     if(dp[i][j]!=-1) return dp[i][j];
//     int up=matrix[i][j]+f(matrix,i-1,j,dp);
//     int ld=matrix[i][j]+f(matrix,i-1,j-1,dp);
//     int rd=matrix[i][j]+f(matrix,i-1,j+1,dp);
//     return max(up,max(rd,ld));
// }
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    // int maxi=-1e8;
    vector<vector<int>>dp(n,vector<int>(m,0));
    // for(int j=0;j<m;j++){
    //  maxi=max(maxi,f(matrix,n-1,j,dp));
    // }
    for(int j=0;j<m;j++){
        dp[0][j]=matrix[0][j];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
          int up=matrix[i][j]+dp[i-1][j];
        int ld=matrix[i][j];
        if(j-1>=0) ld+=dp[i-1][j-1];
        else ld+=-1e8;   
        int rd=matrix[i][j];
        if(j+1<m) rd+=dp[i-1][j+1];
        else rd+=-1e8;
        dp[i][j]= max(up,max(rd,ld));
        }
    }
    int maxi=-1e8;
    for(int j=0;j<m;j++){
        maxi=max(maxi,dp[n-1][j]);
    }
    return maxi;
}
