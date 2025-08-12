// to check if a no is prime or not.
// tho  not the best way, but done it myself finally.With a few errors tho.
#include <iostream>
using namespace std;

bool isPrime (int x) {
    if (x <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i < x; i++) {
        for (int j = 2; j < x; j++) {
            int product = i * j;
            if (product == x) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int x;
    cout << "Enter the value of x : " << endl;
    cin >> x;
    if ( !isPrime(x)) {
        cout << x << " is not a prime number." << endl;
    } else {
        cout << x << " is a prime number." << endl;     
    }
    return 0;
}
