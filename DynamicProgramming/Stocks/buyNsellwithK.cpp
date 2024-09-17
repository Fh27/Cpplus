class Solution {
public:
    int maxProfit(int k, vector<int>& prices) {
        int n =prices.size();
        // vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,-1)));
        vector<int>ahead(2*k+1,0);
        vector<int>curr(2*k+1,0);

        for(int ind=n-1;ind>=0;ind--){
           for(int trno=2*k-1;trno>=0;trno--){
            if(trno%2==0){            
                    curr[trno]=max(-prices[ind]+ahead[trno+1],ahead[trno]);
                    }
            else{
                    curr[trno]=max(prices[ind]+ahead[trno+1],ahead[trno]);
                    }
                }
                ahead=curr;
            }
        // return f(0,1,2,n,prices,dp);
        return ahead[0];
    }
};
