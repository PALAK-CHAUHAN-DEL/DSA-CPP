// A program to check if the number is prime or not
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    bool isPrime = false;
    for ( int i = 2; i <=(n-1); i++) {
        if (n % i == 0) {
            isPrime = true;
        break;
        }
    }
    if (isPrime) {
        cout << "Not Prime";
    } else {
        cout << "Prime";
    }
    return 0;
}