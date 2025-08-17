// Wap using recursion to find the sum of numbers till n.
// Written myself, piece of cake, it's SP is O(n), and TC too us O(n).
#include <iostream>
using namespace std;
 int sum (int n) {
    if (n == 0 || n == 1) { // This is an optimised way if handling the corner case.
        return n;
    }
    return n + sum (n - 1);
 }

 int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int ans = sum (n);
    cout << "The sum of no upto n is : " << ans << endl;
    return 0;
 }