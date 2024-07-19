class Solution {
public:
void f(vector<string>&ans,int n,int open,int close,string output){
    //base
    if(open==0 && close==0){
     ans.push_back(output);
     return;
    }

    //open
if(open>0)
{
output.push_back('(');
f(ans,n,open-1,close,output);
output.pop_back();
}
    //close
if(close>open){
output.push_back(')');
f(ans,n,open,close-1,output);
output.pop_back();
}
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string output="";
        int open=n;
        int close=n;
        int i=0;
        f(ans,n,open ,close,output);
        return ans;
    }
};
