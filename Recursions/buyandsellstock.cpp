class Solution {
public:
void maxxifind(vector<int>& prices,int i,int &minprice,int &maxprof){
    if(i==prices.size()){
        return;
    }
    if(prices[i]<minprice){
        minprice=prices[i];
    }
    int gain=prices[i]-minprice;
    if(gain>maxprof){
        maxprof=gain;
    }
    maxxifind(prices,i+1,minprice,maxprof);

}
    int maxProfit(vector<int>& prices) {
        int minprice=INT_MAX;
        int maxprof=INT_MIN;
        maxxifind(prices,0,minprice,maxprof);
    return maxprof;
    }
};
