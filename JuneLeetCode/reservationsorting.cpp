class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>freq(1001,0);
        vector<int>ans;
        for(int n:arr1){
            freq[n]++;
        }
        for(int n:arr2){
            while(freq[n]>0){
                ans.push_back(n);
                freq[n]--;
            }
        }
        for(int i=0;i<freq.size();i++){
            while(freq[i]>0){
                ans.push_back(i);
                freq[i]--;
            }
        }
        arr1=ans;
        return arr1;

    }
};
