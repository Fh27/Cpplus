#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[]={1,2,3,5,62,343,5};
  int n=7;
  int maxx=INT_MIN;
  int secmax=INT_MIN;
  for(int i=0;i<n;i++){
  if(arr[i]>maxx){
    secmax=maxx;
    maxx=arr[i];
  }
    else if(arr[i]>secmax && arr[i]!=0){
    secmax=arr[i];
    }
    
  }
  cout<<secmax;
  cout<<"\n"<<maxx;
  
return 0;
}
