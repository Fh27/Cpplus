class Solution {
public:
    void sortColors(vector<int>& nums) {
      int c0=0;
      int c1=0;
      int c2=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(nums[i]==0){
            c0++;
        }else if(nums[i]==1) c1++;
        else c2++;
      }

      for(int j=0;j<c0;j++){
        nums[j]=0;
      }
      for(int k=c0;k<c0+c1;k++){
        nums[k]=1;
      }
      for(int l=c0+c1;l<n;l++) nums[l]=2;

        // int n=nums.size();
        // int l=0;
        // int m=0;
        // int h=n-1;
        // while(m<=h){
        //     if(nums[m]==0){
        //         swap(nums[l],nums[m]);
        //         l++;m++;
        //     }
        //     else if(nums[m]==1){
        //             m++;
        //     }else{
        //         swap(nums[m],nums[h]);
        //         h--;
        //     }
        // }

    }
};
