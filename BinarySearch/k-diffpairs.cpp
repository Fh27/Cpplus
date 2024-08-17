class Solution {
public:
        int bs(vector<int>& nums, int start,int key){
            int end=nums.size()-1;
            while(start<=end){
                int mid=(start+end)/2;
                if(nums[mid]==key){
                    return mid;
                }
                else if(nums[mid]>key){
                        end--;
                }
                else{
                    start++;
                }
            }
            return -1;
        }
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        for(int i=0;i<nums.size();i++){
            if(bs(nums,i+1,nums[i]+k)!=-1){
                ans.insert({nums[i],nums[i]+k});
            }
        }
        return ans.size();
    }
};
