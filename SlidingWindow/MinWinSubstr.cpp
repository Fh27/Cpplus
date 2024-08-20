class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()<t.length()) return "";
        int start=0;
        int ansindex=-1;
        int cnt=0;
        unordered_map<char,int>smap;
        unordered_map<char,int>pmap;
        int anslen=INT_MAX;
        for(int i=0;i<t.length();i++){
            char ch=t[i];
            pmap[ch]++;
        }

        for(int i=0;i<s.length();i++){
            char ch=s[i];
            smap[s[i]]++;
            if(smap[ch]<=pmap[ch]){
                cnt++;
            }
            if(cnt==t.length()){

            while(smap[s[start]]>pmap[s[start]] || pmap[s[start]==0]){
                if(smap[s[start]]>pmap[s[start]]){
                    smap[s[start]]--;
                }
                    start++;

            }
            int win=i-start+1;
            if(anslen>win){
                anslen=win;
                ansindex=start;
            }
            }
        }
        if(ansindex==-1){
            return "";
        }else{
            return s.substr(ansindex,anslen);
        }
    }
};
