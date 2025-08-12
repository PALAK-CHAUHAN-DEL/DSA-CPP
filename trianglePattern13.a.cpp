/*     * * * * * 
         * * * *
           * * *
             * * 
               *     */ // to print this pattern using for loop as usual. Written it myself ofc.

#include <iostream>
using namespace std;

int main () {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j < i; j++) {
            cout << "  "; // i have given two spaces here.
        }                 // try removing it and also remove that space after * in next for loop.
        for (int j = n; j >= i; j--) {  // just made a mistake here in j >= i;, i have written j <= i. My bad! Sorry!
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
