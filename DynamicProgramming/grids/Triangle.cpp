#include <bits/stdc++.h> 
int f(vector<vector<int>>& triangle, int i,int j,vector<vector<int>>&dp){
	int n=triangle.size();
	if(i==n-1) return triangle[n-1][j];
	if(dp[i][j]!=-1) return dp[i][j];
	int bot=triangle[i][j]+f(triangle,i+1,j,dp);
	int rd=triangle[i][j]+f(triangle,i+1,j+1,dp);
	return dp[i][j]=min(rd,bot);
}
int minimumPathSum(vector<vector<int>>& triangle, int n){
	// Write your code here.
	// int m=triangle[0].size();
	// vector<vector<int>>dp(n,vector<int>(n,0));
	vector<int>prev(n,0),curr(n,0);
	for(int j=0;j<n;j++){
		prev[j]=triangle[n-1][j];
	}
	for(int i=n-2;i>=0;i--){
		for(int j=i;j>=0;j--){
			int bot=triangle[i][j]+prev[j];
			int rd=triangle[i][j]+prev[j+1];
			 curr[j]=min(rd,bot);
		}
		prev=curr;
	}
	return prev[0];
}
