class Solution {
  public:
    // Function to find pair with maximum sum
    int pairWithMaxSum(vector<int> &arr) {
        // Your code goes here
         int maxSum = INT_MIN;
        for(int i =1; i < arr.size(); i++){
            maxSum = max(maxSum, arr[i]+arr[i-1]);
        }
        return maxSum;
    }
};
