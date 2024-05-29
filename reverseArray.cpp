#include <iostream>

using namespace std;
int main() {
   int n = 5;
   int arr[] = { 5, 4, 3, 2, 1};
   int p1 = 0, p2 = n - 1;
  cout<<"array b4 reverse\n";
  for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
  }
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
  cout<<"array after reverse\n";
  for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
  }
   return 0;
}
