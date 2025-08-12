// define a function to check if no entered is prime or not
// write this code daily before starting studies until u memorise it
//this is same as func6Prime.cpp
#include <iostream>
using namespace std;
bool prime (int n) {
     if ( n <=1 ) return false;
     for ( int i = 2; i <= n-1; i++) {
        if ( n % i == 0) {
            return false; 
        }
     }  return true;
}

int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (prime(n)) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }
}

