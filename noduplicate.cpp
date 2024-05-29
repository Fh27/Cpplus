#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,-1,1,3,1};
int n=nums.size();
    cout<<"Non-repeating numbers are: "<<endl;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
mpp[nums[i]]++;
    } 
    for(auto it:mpp) 
        if(it.second == 1) cout<<it.first<<" ";
    return 0;
}
