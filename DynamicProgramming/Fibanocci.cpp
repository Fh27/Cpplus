//    int helper(int n,vector<int>&dp){
//       if(n==0 || n==1) return n;
//       if(dp[n]!=-1){
//         return dp[n];
//       } 
//       dp[n]=helper(n-1,dp)+helper(n-2,dp);
//       return dp[n];
//     }
    int fib(int n) {
//         vector<int>dp(n+1,-1);
//        int ans= helper(n,dp);
// return ans;
        int prev2=0;
        int prev1=1;
    if(n==0){
        return prev2;

    }
    if(n==1){
        return prev1;
        
    }
        int curr;
        for(int i=2;i<=n;i++){
            curr=prev2+prev1;
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
