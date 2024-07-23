   void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high) {
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[low];
       int i=low;
       int j=high;
       while(i<j){
       while(i<high && arr[i]<=pivot )
           i++;
       while(j>low && arr[j]>pivot )
           j--;
       if(i<j) swap(arr[i],arr[j]);
       
       }
       swap(arr[j],arr[low]);
       return j;
    }
