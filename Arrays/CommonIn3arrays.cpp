vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        int n1=arr1.size();
        int n2=arr2.size();
        int n3=arr3.size();
        int i=0,j=0,k=0;
        vector<int>ans;
        set<int>st;
    while(i<n1 && j<n2 && k<n3){
        if(arr1[i]==arr2[j] && arr2[j]==arr3[k]){
            st.insert(arr1[i]);
            i++;
            j++;k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr3[k]){
            j++;
        }else{
            k++;
        }
    }
    for( auto it:st){
        ans.push_back(it);
    }
    return ans;
    }
