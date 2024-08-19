class Solution {
public:
static bool cmp(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>temp;
        vector<int>ans;
        for( int i=0;i<nums.size();i++){
            int val=nums[i];
            int index=i;
            temp.push_back({val,index});
        }
        sort(temp.begin(),temp.end(),cmp);
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(temp[i].first+temp[j].first==target){
                ans.push_back(temp[i].second);
                ans.push_back(temp[j].second);
                    break;                  //catch!
            }else if(temp[i].first+temp[j].first<target){
                i++;
            }else{
                j--;
            }
        }
return ans;
    }

};
