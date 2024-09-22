bool ispalindrome(int i,int j,string str){
    while(i<j) {
        if(str[i]!=str[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
// int f(int ind,int n,string &str,vector<int>&dp ){
//     if(ind==n) return 0;
//     int mini=INT_MAX;
//     if(dp[ind]!=-1) return dp[ind];
//     //ind --- i
//     for(int i=ind;i<n;i++){
//         if(ispalindrome(ind,i,str)){
//         int cost=1+f(i+1,n,str,dp);
//         mini=min(cost,mini);
//         }
//         }
//     return dp[ind]=mini;
// }
int palindromePartitioning(string str)
{
    //last me -1;
    int n=str.size();
    vector<int>dp(n+1,0);
    //n to 0
    dp[n]=0;
    for(int i=n-1;i>=0;i--){
    int mini=INT_MAX;
        for(int j=i;j<n;j++){
            if(ispalindrome(i,j,str)){
            int cost=1+dp[j+1];
            mini=min(cost,mini);
            }
        }
     dp[i]=mini;
    }

    // return f(0,n,str,dp)-1;
    return dp[0]-1;
}
