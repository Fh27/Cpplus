class Solution {
public:
    void helper(vector<int>&nums,vector<vector<int>>&ans,int index){
    if(index==nums.size()){
       ans.push_back(nums);
        return;
    }
    unordered_map<int,bool>mp;
for(int i=index;i<nums.size();i++){
    if(mp.find(nums[i])!=mp.end()){
        continue;
    }
    mp[nums[i]]=true;
    swap(nums[i],nums[index]);
    helper(nums,ans,index+1);
    swap(nums[i],nums[index]);
}
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(nums,ans,0);
        return ans;
    }
};
