// using the while loop print the sum of numbers from 1 to n
#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int sum = 0;
    int count = 1;
    while ( count <= n) {
        sum += count;
        count++;}
    cout << "Sum = " << sum; // always write this line outside the loop block!
    return 0;
    }
