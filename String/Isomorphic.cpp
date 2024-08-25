bool isIsomorphic(string s, string t) {
        int has[256]={0};
        bool tmap[256]={0};
        for(int i=0;i<s.size();i++){
            if(has[s[i]]==0 && tmap[t[i]]==0){
                has[s[i]]=t[i];
                tmap[t[i]]=true;
            }
        }
        for(int i=0;i<s.size();i++){
            if(has[s[i]]!=t[i]){
                return false;
            }
        }
        return true;
    }
