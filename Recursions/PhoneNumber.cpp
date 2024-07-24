class Solution {
public:
    void solve(string digits,vector<string>&ams,string &output,vector<string>map,int index){
        if(index==digits.length()){
            ams.push_back(output);
            return ;
        }
        int dig=digits[index]-'0';
        string val=map[dig];
        for( int i=0;i<val.length();i++){
            char ch=val[i];
            output.push_back(ch);
            solve(digits,ams,output,map,index+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ams;
        if(digits.length()==0) return ams;
        string output="";
        int index=0;
        vector<string>map(10);
        map[2]="abc";
        map[3]="def";
        map[4]="ghi";
        map[5]="jkl";
        map[6]="mno";
        map[7]="pqrs";
        map[8]="tuv";
        map[9]="wxyz";
        solve(digits,ams,output,map,index);
        return ams;
    }
};
