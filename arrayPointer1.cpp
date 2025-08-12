// to understand the concept of array pointers ... lec 15 of dsa series.
//arr here is the name of the pointer in itself.
#include <iostream>
using namespace std;

int main () {
    int arr[] = {1,2,3,4,5,6};

    cout << arr << endl; // gives the address of 1st element in this array, which is one in this case.
    cout << *arr <<endl;
    return 0; // returns the value stored at the address arr pointer points to....which is the 0th index, 1 here.
}
