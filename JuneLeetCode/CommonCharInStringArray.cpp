class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> freq;
        vector<int> freq2;
        freq=getfreqarray(words[0]);
        for(int i=1;i<words.size();i++){
            freq2=getfreqarray(words[i]);
            for(int j=0;j<26;j++){
                freq[j]=min(freq[j],freq2[j]);
            }
        }
        vector<string> ans;
        for(int i=0;i<26;i++){
            while(freq[i]>0){
                ans.push_back(string (1,'a'+i));
                freq[i]--;
            }
        }
        return ans;
    }
    vector<int> getfreqarray (string words){
        vector<int> freq(26,0);
        for(int i=0;i<words.length();i++){
                freq[words[i]-'a']++;
        }
         return freq;
    }
};
