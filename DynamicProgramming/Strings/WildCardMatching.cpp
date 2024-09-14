class Solution {
private:
    bool solveS0(string s,string p)
    {
        int n=s.length();
        int m=p.length();
        // vector<vector<int>> dp(n+1,vector<int> (m+1,0));
        vector<int>prev(m+1,0);
        vector<int>curr(m+1,0);
        prev[0]=true;
        for(int j=1;j<=m;j++)
        {
            bool flag=true;
            for(int k=1;k<=j;k++)
            {
                if(p[k-1]!='*')
                {
                    flag=false;
                    break;
                }
            }
            prev[j]=flag;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                //match
                if(s[i-1]==p[j-1] || p[j-1]=='?')  curr[j]=prev[j-1];
                else if(p[j-1]=='*') 
                     curr[j]= ( prev[j]|| curr[j-1]);
                else curr[j]=false;
            }
            prev=curr;
        }
        return prev[m];
    }
public:
    bool isMatch(string s, string p) {
         return solveS0(s,p);
    }
};
