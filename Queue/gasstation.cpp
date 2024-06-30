class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int strt=0;
        int bal=0;
        int def=0;
        for(int i=0;i<gas.size();i++){
            bal+=gas[i]-cost[i];
            if(bal<0){
            def+=abs(bal);
            strt=i+1;
            bal=0;
            }
        }
        if(bal>=def){
        return strt;
        }
        else{
            return -1;
            }
    }
};
