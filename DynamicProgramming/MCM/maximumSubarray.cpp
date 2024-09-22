
// int f(vector<int> &arr, int k,int ind,vector<int>&dp){
//     int n=arr.size();
//     if(dp[ind]!=-1) return dp[ind];
//     if(ind==n){
//         return 0;
//     }
//     int len=0;
//     int maxi=INT_MIN;
//     int maxAns=INT_MIN;
//     for(int i=ind;i<min(ind+k,n);i++){
//             len++;
//             maxi=max(maxi,arr[i]);
//             int ans=maxi*len+f(arr,k,i+1,dp);
//             maxAns=max(ans,maxAns);
//     }
//     return dp[ind]=maxAns;
// }
int maximumSubarray(vector<int> &arr, int k){
    // Write your code here.
    int n=arr.size();
    vector<int>dp(n+1,0);
    //n-1 to 0
    dp[n]=0;
    for(int ind=n-1;ind>=0;ind--){
        int len=0;
    int maxi=INT_MIN;
    int maxAns=INT_MIN;
    for(int i=ind;i<min(ind+k,n);i++){
            len++;
            maxi=max(maxi,arr[i]);
            int ans=maxi*len+dp[i+1];
            maxAns=max(ans,maxAns);
    }
     dp[ind]=maxAns;
    }
    // return f(arr,k,0,dp);
    return dp[0];
}
