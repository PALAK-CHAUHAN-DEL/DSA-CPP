//  Defining and finding the size of array 
// also learning to initialising an array with a defined size...
#include <iostream>
using namespace std;

int main () {
    int marks [5] = {10, 20, 30, 40, 50};
    cout << "The size of the array is  : ";
    cout << sizeof (marks) / sizeof (int) << endl; // sizeof is used to find size...standard way!
    int size = 5;

    for (int i = 0; i< size; i++ ) {  
        cout << marks [i] << " ";
    }
    cout << endl;

    int arr[26] = {0};  // initialsing an array with 26 elements, all set to 0.
    cout << "The elements of the second array are : ";
    for (int i = 0; i < 26; i++) {
        cout << arr[i] << " ";
    }    
    return 0;
}
 /* output of sizeof (marks) is 20 and when it is divides by the size of integer we get the size of the 
    array....as size of array just gave us teh amount of space the array consumed!*/