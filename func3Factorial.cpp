// define a code to print n factorial
#include <iostream>
using namespace std;
int factorial (int n) {
    int factorial = 1; // initiallising factorial to 0 will only return 0 as the 
    // output....equate it to 1, cuz anything * 0 is 0....⚆_⚆
    for ( int i=1; i<= n; i++) {
        factorial *= i;}
        return factorial;
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "factorial of numbers is : "<< factorial(n) << endl;
    return 0;
}