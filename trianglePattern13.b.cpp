/*     * * * * * 
         * * * *
           * * *
             * * 
               *     */ // to print this pattern using while loop rather than a for loop.
               // i have almost written it myself.

#include <iostream>
using namespace std;

int main () {
    int n = 5, i = 1;
    while (i <= n) {
      int j = 1;
      while (j < n) {
        if (j < i) {
          cout << "  ";
        } else {
          cout << " *";
        }
        j++;
      }
      i++;
      cout << endl;
    }
    return 0;
}