 bool f(vector<int>arr, int sum,int i){
        vector<bool>prev(sum+1,0),cur(sum+1,0);
        prev[0]=cur[0]=true;
        if(arr[0]<=sum) prev[arr[0]]=true;
        for(int ind=1;ind<i;ind++){
            for( int target=1;target<=sum;target++){
                bool notake=prev[target];
                bool take=false;
                if(arr[ind]<=target)take=prev[target-arr[ind]];
                cur[target] =take |notake;
            }
            prev=cur;
        }
        return prev[sum];
    } 
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totsum=0;
        for(int i=0;i<n;i++){
            totsum+=nums[i];
        }
        if(totsum &1) return false;
        int target=totsum/2;
        return f(nums,target,n-1);
    }
