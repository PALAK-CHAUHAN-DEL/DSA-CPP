// to understand the concept of additioin and substration of numbers on pointers.
#include <iostream>
using namespace std;
 int main () {
    int a = 20;
    int* ptr = &a;
    cout << ptr << endl;
    ptr = ptr + 2;
    cout << ptr << endl;
    return 0;
 }