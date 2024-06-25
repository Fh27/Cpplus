class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int sum=0;
        vector<int> ans;
        ans=heights;
       sort(ans.begin(),ans.end());
        for(int i=0;i<heights.size();i++){
            if(ans[i]!=heights[i]){
                sum++;
                
            }
        }
        return sum;
    }
};
