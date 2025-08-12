// define a function to calculate the sum of digits of a number
//try to write it yourself
// check notes for logic
#include <iostream>
using namespace std;
int sumOfDigits(int n) {
    int digitSum = 0;
        while (n>0) {
            int lastDigit;
            lastDigit = n % 10;
            n = n/10;
            digitSum += lastDigit;
        }
        return digitSum;
}
int main () {
    int x;
    cout << "enter the value of n : ";
    cin >> x;
    cout <<  sumOfDigits(x) << endl;
    return 0;
}        
// placing the return statement inside the while loop would cause the function to
// exit after processing only the first digit. This is because a return statement 
//immediately terminates the function, returning control to the caller. 
//Therefore, to ensure that all digits are processed and summed correctly,
// the return statement should be placed after the loop.

// we were talking of the function we have defined

