//print dum of odd numbers from 1 to n uding the modulo operator
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter the value of n : ";
    cin >> n;
    int sum = 0;
    for ( int i=1; i<=n; i++) {
        if ( i%2 != 0) {
            sum = sum+i;}}
    cout << "Sum of odd numbers from 1 to n are : " << sum;
    return 0;
}