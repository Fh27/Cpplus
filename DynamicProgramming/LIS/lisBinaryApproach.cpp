class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>temp;
        int len=1;
        temp.push_back(nums[0]);
        for(int i=0;i<nums.size();i++){
            if(temp.back()<nums[i]){
                temp.push_back(nums[i]);
                len++;
            }else{
                auto ind=lower_bound(temp.begin(),temp.end(),nums[i])-temp.begin();
                temp[ind]=nums[i];
            }
        }
        return len;
    }
};
