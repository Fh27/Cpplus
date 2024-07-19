class Solution {
public:
    void f(vector<vector<int>>&ans , vector<int>&ds,vector<int> &arr,int target,int ind){
        //base
        if(ind==arr.size()) {
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        //pick
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            f(ans,ds,arr,target-arr[ind],ind);
            ds.pop_back();
        }
        //not pick
        f(ans,ds,arr,target,ind+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
         vector<int>ds;
         f(ans,ds,candidates,target,0);
         return ans;
    }
};
