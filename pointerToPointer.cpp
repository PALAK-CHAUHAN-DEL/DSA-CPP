// a code to understand the basis of a pointer-to-pointer.
// watch lec 15 fo better explanatoin.
// also check your notes for this.
#include <iostream>
#include <vector>
using namespace std;
 int main () {
    int a = 10;
    int* ptr = &a; // pointer ptr storing the address of variable a.
    int** ptr2 = &ptr; // parent pointer (ptr2) storing the value of pointer ptr.

    cout << &ptr <<endl; // address of ptr
    cout << ptr2 << endl; // adress of ptr as stored in ptr2.
    
    cout << &ptr2 << endl; // address of ptr2.

    cout << *ptr2 << endl;  // the value stored at the location to which this pointer ptr2 points to.
    cout << ptr << endl; // same ans as *ptr2.
    cout << &a << endl; // same as *ptr2.

    cout << **ptr2 << endl; // value stores in the value that ptr2 points to.
    // basically it gives out the value at which the ans of *ptr2 points to 

    cout << *&a << endl; // the value stored at address of a.
    
    return 0;
 } 
 // try to understand the logic behind all of this ...as to why the ones grouped together are return ing the same value.