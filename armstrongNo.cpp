// If a no. is an Armstrong number, it is equal to the sum of its own digits each raised to the power of the number of digits.
// It could have been a very easy code if we were to assume that the user id going to enter only a 3 digit value to check.
// Watch lec 34 for explanation. This is a different code from that one, it has been optimes by me and copilot.
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong (int n) {
    int copy = n;
    int copy2 = n;
    int sum = 0;
    int count = 0;

    while (n != 0) {
        n /= 10;
        count++;
    } // at the end of this loop, n becomes 0, so is why we use a copy of n in the next while loop.

    while (copy != 0) {
        int digits = copy % 10;
        sum += pow(digits, count);
        copy /= 10;
    }
    if (copy2 == sum) {
        return true;
    } else {
        return false;
    }
}

int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (isArmstrong(n)) {
        cout << n << " is an Armstrong number." << endl;
    } else {
        cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}