/*  1 1 1 1       // i = 1  // for spaces here run for loop with j<=i
      2 2 2       // i = 2  // for numbers print the value of i in for loop
        3 3       // i = 3  // as this pattern is the combination of spaces and no.
          4  */   // i = 4  // two for loops have been used...
// try to relate the pattern with i and j values and use them...
#include <iostream>
using namespace std;
int main () {
    int n = 4;
    for (int i = 1; i<=n; i++) {
        // to print spaces...
        for ( int j = 1; j <= i; j++) {
            cout << " ";}
            // to print numbers...
            for ( int j = 4; j>= i; j--) {
                cout << i;}  // a wonderful pattern gets printed once u add this " "
                cout << endl; // i mean spaces btw numbers...s
    } return 0;

}