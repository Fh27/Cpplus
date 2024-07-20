class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int>&ds,int ind,vector<int>nums){
        ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            ds.push_back(nums[i]);
            helper(ans,ds,i+1,nums);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        helper(ans,ds,0,nums);
        return ans;
    }
};
