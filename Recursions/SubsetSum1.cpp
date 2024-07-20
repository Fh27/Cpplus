void helper(vector<int>&ans,vector<int>&arr,int n,int i,int sum){
      if(i==n){
          ans.push_back(sum);
          return;
      }
      //pick
      helper(ans,arr,n,i+1,sum+arr[i]);
      //unpick
      helper(ans,arr,n,i+1,sum);
  }
  vector<int> subsetSums(vector<int> arr, int n) {
        vector<int>ans;
        int sum=0;
        helper(ans,arr,n,0,sum);
        return ans;
    }
