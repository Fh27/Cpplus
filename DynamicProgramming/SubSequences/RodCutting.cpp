int f(int price[], int n,int ind,vector<vector<int>>dp){
//       if(ind==0){
//           return n*price[0];
//       }
//       if(dp[ind][n]!=-1) return dp[ind][n];
//       int unpick=0+f(price,n,ind-1,dp);
//       int pick=INT_MIN;
//       int rodl=ind+1;
//       if(n>=rodl) pick=price[ind]+f(price,n-rodl,ind,dp);
//       return dp[ind][n]=max(pick,unpick);
//   }
    // int cutRod(int price[], int n) {
    //     //code here
    //     // vector<vector<int>>dp(n,vector<int>(n+1,0));
    //     vector<int>prev(n+1,0),curr(n+1,0);
    //     for(int N=0;N<=n;N++){
    //         prev[N]=N*price[0];
    //     }
    //     for(int ind=1;ind<n;ind++){
    //         for(int N=0;N<=n;N++){
    //             int unpick=0+prev[N];
    //               int pick=INT_MIN;
    //               int rodl=ind+1;
    //               if(N>=rodl) pick=price[ind]+curr[N-rodl];  //make prev not curr 
    //                curr[N]=max(pick,unpick); //prev
    //         }
    //         prev=curr; //remove it
    //     }
    //     return prev[n];
        // return f(price,n,n-1,dp);

        //Most 1D optimised 
    int cutRod(int price[], int n) {
    vector<vector<int>>dp(n,vector<int>(n+1,0));
	vector<int>prev(n+1,0);

	for(int N=0;N<=n;N++){
		prev[N]= N*price[0];
	}
	for(int ind=1;ind<n;ind++){
		for(int N=0;N<=n;N++){
			int nottake=0+prev[N];
			int take=INT_MIN;
			int rodl=ind+1;
			if(rodl<=N) take=price[ind]+prev[N-rodl];
			prev[N]= max(nottake,take);
		}
	}
	return prev[n];
    }
