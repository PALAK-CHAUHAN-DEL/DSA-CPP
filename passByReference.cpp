// to understand pass by reference properly.
#include <iostream>
using namespace std;

void Reference (int* pointer) { // pass by reference using pointers
    *pointer = 20;
}
int main () {
    int a = 10; // assigning some random value to a.
    Reference (&a); // go to this address and change the value to 20 as mentioned in the reference.
// we are basicaly assingning a variable to a value....it's a here
    cout << "Inside the main function the value of is now changed to : " << a << endl; // 20
    return 0;
} // check notes pg 43 back.
