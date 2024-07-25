class Solution {
public:
void solve(vector<int>&v,int &ans,int n,int currnum){
    if(currnum==n+1){
        ++ans;
        return;

    }
    for(int i=1;i<=n;i++){
        if(v[i]==0 && (currnum%i==0 || i%currnum==0)){
            v[i]=currnum;
            solve(v,ans,n,currnum+1);
            v[i]=0;
        }
    }

}
    int countArrangement(int n) {
        int ans;
        vector<int>v(n+1);
        solve(v,ans,n,1);
        return ans;
    }
};
