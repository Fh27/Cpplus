class Solution {
public:
    // int f(vector<int>& coins, int amount ,int i,vector<vector<int>>&dp){
    //     if(i==0){
    //         if(amount%coins[0]==0) return amount/coins[0];
    //     else{
    //         return 1e9;
    //     }
    //     }
    //     if(dp[i][amount]!=-1) return dp[i][amount];
    //     int unpick=0+f(coins,amount,i-1,dp);
    //     int pick=INT_MAX;
    //     if(amount>=coins[i]) pick=1+f(coins,amount-coins[i],i,dp);
    //     return dp[i][amount]=min(pick,unpick);
    // }
    
    int coinChange(vector<int>& coins, int amount) {
        // int ans=f(coins,amount,n-1,dp);
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,0));
        for(int t=0;t<=amount;t++){
            if(t%coins[0]==0)  dp[0][t]=t/coins[0];
            else{
                dp[0][t]=1e9;
            }
        }
        for(int i=1;i<n;i++){
            for(int t=0;t<=amount;t++){
            int unpick=0+dp[i-1][t];
            int pick=INT_MAX;
            if(t>=coins[i])   pick=1+dp[i][t-coins[i]];
            dp[i][t]=min(pick,unpick);
            }
        }
        int ans=dp[n-1][amount];
        if(ans>=1e9){
            return -1;
        }else{
            return ans;
        }
    }
};
