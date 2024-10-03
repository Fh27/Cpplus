int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
	int totsum=0;
	for(int i=0;i<n;i++) totsum+=arr[i];
	int k=totsum;
	vector<vector<bool>>dp(n,vector<bool>(k+1,0));
    for(int ind=0;ind<n;ind++) dp[ind][0]=true;
    if(arr[0]<=k) dp[0][arr[0]]=true;
    for(int ind=1;ind<n;ind++){
        for(int j=1;j<=k;j++){
            bool nottake=dp[ind-1][j];
            bool take=false;
            if(arr[ind]<=j) take=dp[ind-1][j-arr[ind]];
            dp[ind][j]= take|nottake;
        }
    }
	int mini=1e9;
	for(int i=0;i<=totsum/2;i++){
		if(dp[n-1][i]==true){
			mini=min(mini,abs((totsum-i)-i));
		}
	}
	return mini;
}
