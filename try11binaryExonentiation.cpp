// never understood how this code or concept works....just writing the code...watch lec 13 of dsa series.
// i just didnt get anything.
#include <iostream>
using namespace std;
double myPow (double x, int n) {
       if  (n == 0) return 1.0;  // these are called the corner casses.
       if ( x == 0) return 0.0;  // without this also the code will run if there are no corner cases.
       if ( x == 1) return 1.0;
       if ( x == -1 && n % 2 == 0) return 1.0;
       if ( x == -1 && n % 2 != 0) return -1.0;

       long binForm = n;
       if (n < 0) {
         x = 1 / x;
         binForm = -binForm;
       }

       double ans = 1;

       while ( binForm > 0) {
              if (binForm % 2 == 1) {
                ans *= x;
              }
                x *= x; 
                binForm /= 2;
       }
       return ans;
}
int main() {
    double x = 2.0;
    int n = 10;
    cout << "The result of " << x << " raised to the power of " << n << " is: " << myPow(x, n) << endl;
    return 0;
}