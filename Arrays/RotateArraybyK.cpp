class Solution {
public:
void Reverse(vector<int>& nums , int start,int end){
    while(start<=end){
        swap(nums[start],nums[end]);
        start++;
        end--;
       
    }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return ;
        k=k%n;
        if(k>n) return;
        Reverse(nums,0,n-k-1);
        Reverse(nums,n-k,n-1);
        Reverse(nums,0,n-1);
    }
};
