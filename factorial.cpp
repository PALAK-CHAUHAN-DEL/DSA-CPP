// print factirial of a number
// try to write it yourself...not a big deal...
#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int fact = 1;
    for (int i = 1; i<=n; i++) {
        fact *= i;}
        cout << fact;
        return 0;
    
    
}