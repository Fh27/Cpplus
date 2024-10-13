class Solution {
public:
    int longestPalindrome(string s) {
      int  oddcnt=0;
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
            if(mp[c]%2==1)
                oddcnt++;
                else oddcnt--;
        }
        if(oddcnt>1) return s.length()-oddcnt+1;
        return s.length();
    }
};
