string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        
        //str banao , str ke extra zeros ku hatao , reverse karo .
        string ans="";
        int n=arr1.size();
        int m=arr2.size();
        int j=m-1;
        int i=n-1;
        int carry=0;
        while(i>=0 && j>=0){
            int sum=arr1[i]+arr2[j]+carry;
            int dig=sum%10;
            carry=sum/10;
            ans.push_back(dig+'0');            //convert num to char using [+ '0']
            i--;
            j--;
        }
        while(i>=0 ){
            int sum=arr1[i]+carry;
            int dig=sum%10;
            carry=sum/10;
            ans.push_back(dig+'0');
            i--;
        }
        while( j>=0){
            int sum=arr2[j]+carry;
            int dig=sum%10;
            carry=sum/10;
            ans.push_back(dig+'0');
            j--;
        }
        if(carry){
           ans.push_back(carry+'0');
        }
        int len=ans.size();
        while(ans[len-1]==0){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
    
        return ans;
    }
