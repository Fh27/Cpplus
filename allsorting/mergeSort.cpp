#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
 vector<int> vc ;
 int left=low;
 int right=mid+1;
 while(left<=mid && right<=high){
     
         if(arr[left]<=arr[right]){
             vc.push_back(arr[left]);
             left++;
         }else{
             vc.push_back(arr[right]);
             right++;
         }
     }
     
     while(left<=mid){
          vc.push_back(arr[left]);
             left++;
     }
     while(right<=high){
          vc.push_back(arr[right]);
             right++;
     }
     
    for(int i=low;i<=high;i++){
        arr[i]=vc[i];
    }
 }

void mergesort(int arr[],int low,int high){
    if(low>=high  ) return ;
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int arr[]={7,8,1};
    int n=3;
   mergesort(arr,0,n-1);
   
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    
    return 0;
}
