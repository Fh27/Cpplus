vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>ans;
        stack<long long>st;
        
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]>=st.top()){
                st.pop();
            }
            if(st.empty()) ans.push_back(-1);
            else{
            ans.push_back(st.top());
            }
                st.push(arr[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
