class Solution {
public:
    int appendCharacters(string s, string t) {
        int ids=0;
        int idt=0;
        while(ids<s.length()){
            if(s[ids]==t[idt]){
                idt++;
            }
            ids++;
        }
        return t.length()-idt;
    }
};
