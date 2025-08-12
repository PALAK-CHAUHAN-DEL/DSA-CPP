// a simple code to understans the basics of a pointer.
#include <iostream>
#include <vector>
using namespace std;

int main () {
int a = 10;
int* ptr = &a;

cout << &a << endl; // address of a
cout << ptr << endl; // address of a as stored in pointer ptr
cout << &ptr << endl; // address of pointer ptr
cout << *ptr << endl; //gives the value stored at the address that ptr points to...the value of a in this case.

return 0;
}