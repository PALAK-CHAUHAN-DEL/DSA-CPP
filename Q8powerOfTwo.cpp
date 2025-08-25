// Same as problem 231 on leetcode...Solving this using loop and not recursion.
// Check for all the conditions that make it false and return true at last.Try to write it yourself...
#include <iostream>
using namespace std;

 bool isPowerOfTwo(int n) {
        if (n < 1) {
            return false;
        }
    while (n > 1) {
        if (n % 2 != 0) {
            return false;
        }
        n /= 2;
    }
    return true;
}

int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (isPowerOfTwo(n)) {  // Don't forget to write (n).
        cout << "The given number is a power of two!";
    } else {
        cout << "The given number is not a power of two!";
    }
    return 0;
}