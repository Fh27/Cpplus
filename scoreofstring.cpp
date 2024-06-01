class Solution {
public:
    int scoreOfString(string s) {
        int n=s.length();
        int ans=0;
        for(int i=1;i<n;i++){
        int asc=(int) s[i];
         ans+=abs(s[i-1]-s[i]);
        }
    return ans;
    }
};
