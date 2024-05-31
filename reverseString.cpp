#include <bits/stdc++.h>
using namespace std;
int main() {
  string str = "HELLO";
    int i = 0;
  int j = str.length() - 1;
  while (i < j) {
    int temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
  }
  cout << "The reversed string is- " << str;
  return 0;
}
