void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int left=l;
         int right=m+1;
         int temp[r-l+1];
         int k=0;
         while(left<=m && right<=r){
             if(arr[left]<arr[right]){
                temp[k]=arr[left];
                left++;
             }
             else{
             temp[k]=arr[right];
             right++;
             }
             k++;
         }
         while(left<=m){
             temp[k++]=arr[left++];
             
         }
         while(right<=r){   
         temp[k++]=arr[right++];
         }
         for( int i=l;i<=r;i++){
             arr[i]=temp[i-l];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l<r){  
        int m=(l+r)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
        }
    }
