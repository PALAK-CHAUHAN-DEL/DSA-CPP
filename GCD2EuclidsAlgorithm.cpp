// A better approach to find GCD is by using Euclid's Algorithm.Watch lec 34 for explanation.
// We will find LCM also here only. As we know that lcm * hcf = product of 2 no.
#include <iostream>
using namespace std;

int gcd (int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if ( a == 0 ) return b;
    return a;
}

int lcm (int a, int b) {
    return (a * b) / gcd(a, b);
}

int main () {
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    cout << "The GCD of " << a << " and " << b << " is : ";
    int result = gcd(a, b);
    cout << result << endl;

    cout << "The LCM of " << a << " and " << b << " is : ";
    cout << lcm(a, b) << endl;
    return 0;
}


