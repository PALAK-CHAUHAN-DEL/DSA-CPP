// waf to reverse the int n...same as problem 7 on leetcode
/* remember .. not to just print it but to actually reverse it so that when u call 
   the variable in which it is stored, it returns the reversed integer! */
// wasen't able to write it myself!!...think of the logic properly.... 
#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int n) {
    int reversed = 0;
    while (n != 0) {
        int lastdigit = n % 10;
        // Check for overflow before multiplying
        if (reversed > INT_MAX/10 || reversed < INT_MIN/10)
            return 0;
        reversed = reversed * 10 + lastdigit;
        n = n / 10;
    }
    return reversed;
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The reversed integer is : "<< reverse(n);
    return 0;
}