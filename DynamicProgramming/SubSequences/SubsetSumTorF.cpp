bool f(vector<int>arr, int sum,int i,vector<vector<int>>&dp){
        if(sum==0) return true;
        if(i==0) return (arr[i]==sum);
        if(dp[i][sum]!=-1) return dp[i][sum];
        bool unpick=f(arr,sum,i-1,dp);
        bool pick=false;
        if(arr[i]<=sum)  pick=f(arr,sum-arr[i],i-1,dp);
        return dp[i][sum]=unpick|pick;
    } 
    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return f(arr,sum,n-1,dp);
    }
