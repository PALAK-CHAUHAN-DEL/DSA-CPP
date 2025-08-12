// doing operations on a pointer with another pointer and not a no, like in previous cases.

#include <iostream>
using namespace std;

int main () {

    int* ptr1; // if it stores address 100, then:
    int* ptr2 = ptr1 + 2;// ptr1 stores then address 108 now..that is 2 more int can be stored btw these 2 addresses.

    cout << ptr2 - ptr1 << endl;
    return 0;
}