// to print sum of all numbers from 1 to n that are divisible by 3
// written it myself!....going good...keep going Palak!
#include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i<=n; i++) {
        if (i%3 == 0) {
            sum += i;}}
            cout << sum;
            return 0;
}