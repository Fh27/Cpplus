class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string>temp(numRows);
        string ans="";
        int row=0,i=0;
        bool dir=1;
        while(true){
            if(dir){
                while(row<numRows && i<s.size()){
                    temp[row++].push_back(s[i++]);
                }
                row=numRows-2;
            }else{
                while(row>=0 && i<s.size()){
                    temp[row--].push_back(s[i++]);
                }
                row=1;
            }
            if(i>=s.size())break;
            dir=!dir;
        }

        for(int i=0;i<temp.size();i++){
            ans+=temp[i];
        }
        return ans;
    }
};
