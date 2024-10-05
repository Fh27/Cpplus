int maximumProfit(vector<int> &values, int n, int fee)
{
	 long aheadbuy=0,aheadnotbuy=0,currbuy,currnotbuy;
    for(int ind=n-1 ;ind>=0;ind--){
            currnotbuy=max(values[ind]-fee+aheadbuy,aheadnotbuy);
            currbuy=max(-values[ind]+aheadnotbuy,aheadbuy);
        	aheadnotbuy=currnotbuy;
        	aheadbuy=currbuy;
    }
    return aheadbuy;
}
