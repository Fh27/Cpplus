class Solution {
public:
    int findNumberOfLIS(vector<int>& arr) {
        int n=arr.size();
        vector<int>dp1(n,1);
        vector<int>cnt(n,1);
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i] && 1+dp1[j]>dp1[i]){
                    dp1[i]=dp1[j]+1;
                    cnt[i]=cnt[j];
                }
                else if(arr[j]<arr[i] && 1+dp1[j]==dp1[i]){
                    cnt[i]+=cnt[j];
                }
            }
            maxi=max(maxi,dp1[i]); 
        }
    int nos=0;
    for(int i=0;i<n;i++){
        if(dp1[i]==maxi){
            nos+=cnt[i];
        }
    }
    return nos;
    }
    
};
