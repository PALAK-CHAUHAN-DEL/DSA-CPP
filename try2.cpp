// write a program to print prime no. from 2 to n
// write this code daily before starting studies until u memorise it
//this is same as func7printPrime.cpp
// check func6Prime.cpp before this!
#include <iostream>
using namespace std;
bool isPrime (int n) {
    if (n <= 1) return false;
    for ( int i = 2; i <= n-1; i++) {
         if (n % i == 0) 
         return false;
    } return true;
}

void printPrime ( int n ) {
    for (int i = 2; i <= n-1; i++) {
        if ( isPrime (i)) {
            cout << i << " ";
        }
    }   cout << endl;
}

int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Prime numers from 2 to " << n << " are :  "; 
    printPrime (n);
    return 0;
}