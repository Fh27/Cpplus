class Solution {
public:
int f(int ind,int buy,int cap,int n,vector<int>& prices,vector<vector<vector<int>>>&dp){
        if(ind==n ||cap==0) return 0;
        if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
        int profit=0;
        if(buy){
            profit=max(-prices[ind]+f(ind+1,0,cap,n,prices,dp),f(ind+1,1,cap,n,prices,dp));
        }else{
            profit=max(prices[ind]+f(ind+1,1,cap-1,n,prices,dp),f(ind+1,0,cap,n,prices,dp));
        }
        return dp[ind][buy][cap]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        // vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                for(int cap=1;cap<=2;cap++){
                    int profit=0;
                    if(buy){
                        profit=max(-prices[ind]+dp[ind+1][0][cap],dp[ind+1][1][cap]);
                    }else{
                        profit=max(prices[ind]+dp[ind+1][1][cap-1],dp[ind+1][0][cap]);
                    }
                     dp[ind][buy][cap]=profit;
                }
            }
        }
        // return f(0,1,2,n,prices,dp);
        return dp[0][1][2];
    }
};
