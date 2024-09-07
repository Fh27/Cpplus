class Solution {
public:
    // int recur(int m ,int n){
    //     if(m==0&&n==0)return 1;
    //     if(m<0 || n<0) return 0;
    //     int left=recur(m,n-1);
    //     int up=recur(m-1,n);
    //     return left+up;
    // }
    //  int recurDp(int m ,int n,vector<vector<int>>&dp){
    //     if(m==0&&n==0)return 1;
    //     if(m<0 || n<0) return 0;
    //     if(dp[m][n]!=-1) return dp[m][n];
    //     int left=recurDp(m,n-1,dp);
    //     int up=recurDp(m-1,n,dp);
    //     return dp[m][n]=left+up;
    // }
    int uniquePaths(int m, int n) {
        // return recur(m-1,n-1);
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return recurDp(m-1,n-1,dp);
        // int dp[m][n];
        // return dp[m - 1][n - 1];
            vector<int>prev(n,0);
        for (int i = 0; i < m; i++) {
                vector<int>curr(n,0);
            for (int j = 0; j < n; j++) {
                if(i==0 && j==0)  curr[j]=1;
                else{
                int left=0;
                int up=0;
                    if(j>0)  left=curr[j - 1];
                    if(i>0)  up=prev[j];
                curr[j] =  up+left ;
                }
            }
            prev=curr;
        }
        return prev[n-1];
    }
};
