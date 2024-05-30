#include <bits/stdc++.h>
using namespace std ;


int main() {

    string st = "1a30z67"  ;

    int l = st.length()  ;
  int sum = 0  ;
        for (int i = 0; i < l; i++) {

            if (st[i] >= '0' && st[i] <= '9') {
                sum += (st[i] -'0') ;
            }
    }
                cout<<sum<<endl;
 

    return 0  ;
}
