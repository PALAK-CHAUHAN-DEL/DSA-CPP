// understanding the concept of pointers in array..
#include <iostream>
using namespace std;

int main () {
    int arr[] = {1,2,3,4,5,6};
    cout << *arr << endl;
    cout << (*arr + 1) << endl; // understand why it is written as *arr + 1
    return 0;
}
/**arr gives you the value at the first element of the array (arr[0]), which is 1.
*arr + 1 means take the value at the first element and add 1 to it. So, it gives 1 + 1 = 2.*/

//--------------------------------------------------------------------------------------------

/* If you wrote arr += 1;,
 it would try to move the pointer to the next element (like arr = arr + 1;), but in C++,
  the name of an array (like arr) is a constant pointer—you cannot change it.*/

  //------------------------------------------------------------------------------------------

/* *arr + 1 simply calculates the value at the first element (1) plus 1,
 which is 2, and prints it.*/