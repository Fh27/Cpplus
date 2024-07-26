class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int ans=nums.size();
        while(l<=r){
        int m=l+(r-l)/2;
            if(nums[m]==target){
                ans= m;
                break;
            }else if(nums[m]<target){
                l=m+1;
            }else{
                ans=m;
                r=m-1;
            }
        }
        return ans;
    }
};
