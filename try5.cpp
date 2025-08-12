// Waf to figure out if a no. is a power of 2 without any loop using bitwise leftshift!
/* understanding this code is only so difficult, writiing it myself is a far fetched idea!*/

// same as code powerOfTwo.cpp!
#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    for (int i = 0; i < 31; i++) { // 31 bits for int ... as one bit is used to indicate the sign  
        if ((1 << i) == n)
            return true;
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPowerOfTwo(num))
        cout << num << " is a power of 2." << endl;
    else
        cout << num << " is not a power of 2." << endl;
    return 0;
}

/*Here’s a complete explanation of the function bool isPowerOfTwo(int n) from your code:

Step-by-step Explanation
Check for Non-positive Numbers

if (n <= 0) return false; ---------------------- these lines sre of codes!

Powers of two are always positive (1, 2, 4, 8, ...).
If n is zero or negative, the function immediately returns false.
Loop Through Bit Positions

for (int i = 0; i < 31; i++) { --------------------------

he loop runs from i = 0 to i = 30 (31 iterations).
In a 32-bit signed integer, one bit is used for the sign, so only 31 bits are available for positive values.
Bitwise Left Shift

if ((1 << i) == n) ---------------------------

1 << i shifts the number 1 to the left by i positions, which is equivalent to calculating (2^i).
For example, if i = 3, 1 << 3 is 8 (binary 1000).
The function checks if n is equal to any of these powers of two.
Return True if Match Found

If n matches any power of two, the function returns true.
Return False if No Match

return false; ----------------------------

If the loop completes without finding a match, n is not a power of two, so the function returns false.
Summary
The function checks if n is a positive integer and then compares it to all possible powers of two that fit in a 32-bit signed integer.
If n matches any of these, it returns true; otherwise, it returns false.
*/