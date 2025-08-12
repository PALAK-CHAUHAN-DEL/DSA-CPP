// To understand the concept of pointer arithmetic.
// watch lec 16 for better understanding.
# include <iostream>
using namespace std;

int main () {
    int a = 10;
    int* ptr = &a;
    cout << ptr << endl;

    ptr++; // increment operator
    cout << ptr << endl; 

    ptr--; // decrement operator
    cout << ptr << endl; // will get the same value as 1st cout.

    return 0;
}