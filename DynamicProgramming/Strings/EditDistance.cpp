class Solution {
public:
    // int f(string word1, string word2,int i,int j,vector<vector<int>>&dp){
    //     if(i==0) return j;
    //     if(j==0) return i;
    //     if(dp[i][j]!=-1) return dp[i][j];
    //     if(word1[i-1]==word2[j-1]){
    //         return dp[i][j]= 0+f(word1,word2,i-1,j-1,dp);
    //     }
    //     return dp[i][j]= 1+min(f(word1,word2,i-1,j-1,dp),min(f(word1,word2,i-1,j,dp),f(word1,word2,i,j-1,dp)));
    // } 
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        // vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        vector<int>prev(m+1,0);
        vector<int>curr(m+1,0);
        for(int i=0;i<=m;i++) prev[i]=i;
        // for(int j=0;j<=m;j++) dp[0][j]=j;
        for(int i=1;i<=n;i++){
            curr[0]=i;
            for(int j=1;j<=m;j++){
                    if(word1[i-1]==word2[j-1]){
                 curr[j]= 0+prev[j-1];
            }
            else  curr[j]= 1+min(prev[j-1],min(curr[j-1],prev[j]));
            }
            prev=curr;
        }
        return prev[m];
    }
};
