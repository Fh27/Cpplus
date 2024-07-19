class Solution {
public:
     void f(vector<vector<int>>&ans , vector<int>&ds,vector<int> &arr,int target,int ind){
        //base
            if(target==0){
                ans.push_back(ds);
            return;
            }
        //pick
        for(int i=ind;i<arr.size();i++){
            if( i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ds.push_back(arr[i]);
            f(ans,ds,arr,target-arr[i],i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
         vector<vector<int>>ans;
         vector<int>ds;
         f(ans,ds,candidates,target,0);
         return ans;
    }
};
