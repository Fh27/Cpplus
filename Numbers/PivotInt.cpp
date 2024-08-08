class Solution {
public:
    int pivotInteger(int n) {
        int i=1,j=n;
        if(i==j)return i;
        else{
            int s1=0,s2=0,res=-1;
            while(i<=j){
                if(s1<=s2){
                    s1+=i;
                    i+=1;
                }
                else if(s1>=s2){
                    s2+=j;
                    j-=1;
                }
                if(i==j && s1==s2){
                    res=i;
                }
            }
            return res;
        }
    }
};
