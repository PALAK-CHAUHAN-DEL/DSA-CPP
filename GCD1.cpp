// GCD (Greatest Common Divisor) / HCF, solving this with brute force approach.
// To let uk : we take the common divisor of both the no and then multiply them. Unlike LCM where we include uncommon divisors too in multiplication.
#include <iostream>
using namespace std;
 int main () {
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    int gcd = 1;
    if (a == 0 || b == 0) { 
        cout << "GCD is : "<<  abs(max(a, b)) << endl;
        return 1;
    }

    if ( a == b) {
        cout << "The GCD of " << a << " and " << b << " is : " << a << endl;
        return 0;
    }
    for (int i = 1; i <= min (a, b); i++) { // don't make the blunder of starting i with 0, as division with 0 is not defined. 
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    cout << "The GCD of " << a << " and " << b << " is : " << gcd << endl;
    return 0;
 } 