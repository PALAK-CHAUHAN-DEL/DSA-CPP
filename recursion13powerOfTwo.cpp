// Same as problem 321 on leetcode, and we'll solve it using recursion, for sol using loop refer to Q8powerOfTwo.cpp
// Pls think of this yourself, the logic of recursion is very simple and easy just use lil brain.
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n < 1) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    if (n % 2 != 0) {
        return false;
    }
    return isPowerOfTwo(n / 2); // Here we get one even for 3 i.e for wrong ans so we have added a condition above
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    if (isPowerOfTwo(n)) {
        cout << "The given number is a power of two!";
    } else {
        cout << "The given number is not a power of two!";
    }
    return 0;
}