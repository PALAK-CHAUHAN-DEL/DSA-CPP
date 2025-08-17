// Another basic q to print the factorial of n using recursion.
// Try to write it yourself...
#include <iostream>
using namespace std;

int factorial (int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * factorial (n-1);
}

int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int result = factorial (n);
    cout << "The factorial of the entered no is : " << result << endl;
    return 0;
}