int stockProfit(vector<int> &values){
    
    int n=values.size();
    //  vector<vector<long>>dp(n+2,vector<long>(2,0));
     vector<int>after2(2,0);
    vector<int>after1(2,0);
     vector<int>curr(2,0);
    for(int ind=n-1 ;ind>=0;ind--){
            long profit=0;
                profit=max(values[ind]+after2[1],after1[0]);
                curr[0]=profit;
                profit=max(-values[ind]+after1[0],after1[1]);
                curr[1]=profit;   
                after2=after1;
                after1=curr;    
    }
    return after1[1];
}
