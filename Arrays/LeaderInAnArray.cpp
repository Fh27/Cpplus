class Solution {
    // Function to find the leaders in the array.
  public:
  
    vector<int> leaders(int n, int arr[]) {
        int mx=arr[n-1];
        vector<int>ans;
        ans.push_back(mx);
        for(int i=n-2; i>=0; i--){
            if(arr[i]<mx)
            continue;
            mx=arr[i];
            ans.push_back(mx);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
