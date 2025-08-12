/* 123
   456
   789*/
#include <iostream>
using namespace std;
int main() {
    int n =3, x=1;
    for ( int i=1; i<=n; i++) {
        cout << endl;
        for ( int j=1; j<=n; j++) {
            cout << x << " ";
            x +=1;
        }
    }
    return 0;
} //because x was declared outside the 1st loop!
// written it myself...
