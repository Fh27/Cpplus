bool ispos(int n, int arr[], int m,int sol){
        int pages=0;
        int c=1;
        for(int i=0;i<n;i++){
            if(arr[i]>sol){
                return false;
            }
            if(arr[i]+pages>sol){
                c++;
                pages=arr[i];
                if(c>m){
                    return false;
                }
            }else{
                pages+=arr[i];
            }
        }
        return true;
    }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        if(m>n) return -1;
        long long ans=-1;
        int start=0;
        int end=accumulate(arr,arr+n,0);
        while(start<=end){
            int mid=(start+end)/2;
            if(ispos(n,arr,m,mid)){
                ans=mid;
                end=mid-1;
                
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
