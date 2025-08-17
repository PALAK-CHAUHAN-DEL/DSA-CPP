// Watch lec 42 for explanation. Refer to Pg 72 from back of notebook...
// Wap using recursion to print no from 1 to n.
#include <iostream>
using namespace std;

void printNums (int n) {
    if (n == 1) {      // Base case when func stops calling itself.
        cout << "1\n";
        return ;
    }
    cout << n << " ";
    printNums (n - 1);
}

int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    printNums (n);
    return 0;
}