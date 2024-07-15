//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        if(n==0) return 0;
        if(n<0) return INT_MIN;
        
        int a=maximizeTheCuts(n-x,x,y,z)+1;
        int b=maximizeTheCuts(n-y,x,y,z)+1;
        int c=maximizeTheCuts(n-z,x,y,z)+1;
        
        int maxi=max(a,max(b,c));
        return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends
