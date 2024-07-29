    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int maxlen=0;
        int sum=0;
        unordered_map<int,int>mpp;
        for( int i=0;i<N;i++){
            sum+=A[i];
            if(sum==K){
                maxlen=max(maxlen,i+1);
            }
            int rem=sum-K;
            if(mpp.find(rem)!=mpp.end()){
                int len=i-mpp[rem];
                maxlen=max(maxlen,len);
            }
            if(mpp.find(sum)==mpp.end()){
                mpp[sum]=i;
            }
        }
        
        return maxlen;
        
    } 
