#include <iostream>
using namespace std;

void swap(int &a,int &b){
	int t=a;
	a=b;
	b=t;
}
void selectsort(int arr[],int n){
	for(int i=0;i<=n-2;i++){
		int mini=i;
		for(int j=i;j<=n-1;j++){
			if(arr[j]<arr[mini]){
				mini=j;
			}
		}
		swap(arr[mini],arr[i]);
	}
	
}

void bubblesort(int arr[],int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<=i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j+1],arr[j]);
			}
		}
	}
}
void insertion_sort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
int main(){
	
	int arr[]={12,45,33,22,11};
	int n=sizeof(arr)/sizeof(arr[0]);
//	selectsort(arr,n);
//bubblesort(arr,n);
insertion_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
