// Wap using recursion to find the fibonacci upto the given no (n).
// Try to write it yourself....same as problem 509 on leetcode.
// For space and time complexity check pg 77 of back of notebook.
#include <iostream>
using namespace std;
int fibonacci (int n) {
    if(n == 1) { // as f(1) = 1
        return 1;
    } if (n == 0) {  // as f(0) = 0
        return 0;
    }
    return fibonacci(n - 1) + fibonacci (n - 2);
}
int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}