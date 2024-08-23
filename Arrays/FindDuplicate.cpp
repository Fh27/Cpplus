 int findDuplicate(vector<int>& nums) {
        for(int num:nums){
            int ind=abs(num);
            if(nums[ind]<0){
                return ind;
            }
            nums[ind]=-nums[ind];
        }
        return -1;
    }
