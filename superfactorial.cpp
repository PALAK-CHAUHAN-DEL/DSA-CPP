//To check if the given number is a superfactorial or not, i.e, if the sum of factorial of individual digits of a no. is equal to the no or not.
// Written it myself.
#include <iostream>
using namespace std;
int factorial (int n) {
    int fact  = 1;
    for (int i = 1; i <= n; i++) {
         fact *= i; 
    }
    return fact;
}

int main () {
    int digit = 0;
    int sum = 0;
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    int copy = n;
    for (int i = 0; n > 0; i++) {
         digit = n % 10;
         sum  += factorial (digit);
         n /= 10;
    }
    if (sum == copy) {
        cout << "It is a valid super factorial!" << endl;
    } else {
        cout << "It is not a valid super factorial!" << endl;
    }
    return 0;
}