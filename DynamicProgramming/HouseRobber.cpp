class Solution {
public:
    // int helper(vector<int>& nums,int n){
    //     if(n==0) return nums[0];
    //     if(n<0) return 0;
    //     int pick=nums[n]+helper(nums,n-2);
    //     int notpick=0+helper(nums,n-1);
    //     return max(pick,notpick);
    // }
    // int Dphelper(vector<int>& nums,int n,vector<int>&dp){
    //     if(n==0) return nums[0];
    //     if(n<0) return 0;
    //     if(dp[n]!=-1){
    //         return dp[n];
    //     }
    //     int pick=nums[n]+Dphelper(nums,n-2,dp);
    //     int notpick=0+Dphelper(nums,n-1,dp);
    //     return dp[n]=max(pick,notpick);
    // }

    int rob(vector<int>& nums) {
        // int prev=nums[0];
        // int prev2=0;
        // for(int i=1;i<nums.size();i++){
        //     int pick=nums[i];
        //     if(i>1) pick+=prev2;
        //     int notpick=0+prev;
        //    int curr=max(pick,notpick);
        //     prev2=prev;
        //     prev=curr;
        // }
        // return prev;
        // return helper(nums,n-1);
        // return Dphelper(nums,n-1,dp);
        int n=nums.size();
        vector<int>dp(n,-1);
        dp[0]=nums[0];
        for(int i=1;i<n;i++){
            int pick=nums[i];
            if(i>1) pick+=dp[i-2];
         int notpick=0+dp[i-1];
          dp[i]=max(pick,notpick);
        }
        return dp[n-1];
    }
};
