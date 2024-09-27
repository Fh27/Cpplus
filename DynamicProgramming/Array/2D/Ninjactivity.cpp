int f(vector<vector<int>>& arr, int ind,int last,vector<vector<int>>&dp){
        
        if(ind==0){
            int maxi=0;
            for(int j=0;j<3;j++){
             if(j!=last)   maxi=max(maxi,arr[0][j]);
            }
            return maxi;
        }
        if(dp[ind][last]!=-1) return dp[ind][last];
        int maxi=0;
        for(int i=0;i<=2;i++){
            if(i!=last){
                int active=arr[ind][i]+f(arr,ind-1,i,dp);
                maxi=max(maxi,active);
            }
        }
        return dp[ind][last]=maxi;
    }
    int maximumPoints(vector<vector<int>>& arr, int n) {
        // Code here
        int task=arr[0].size();
        // vector<vector<int>>dp(n,vector<int>(4,-1));
        vector<vector<int>>dp(n,vector<int>(4,0));
        dp[0][0]=max(arr[0][1],arr[0][2]);
        dp[0][1]=max(arr[0][0],arr[0][2]);
        dp[0][2]=max(arr[0][1],arr[0][0]);
        dp[0][3]=max(arr[0][3],max(arr[0][1],arr[0][2]));
        for(int ind=1;ind<n;ind++){
            for(int j=0;j<4;j++){
                dp[ind][j]=0;
                for(int i=0;i<=2;i++){
                    if(i!=j){
                        int active=arr[ind][i]+dp[ind-1][i];
                        dp[ind][j]=max(active,dp[ind][j]);
                    }
                }
            }
        }
        return dp[n-1][3];
        // return f(arr,n-1,task,dp);
    }
