// write a function to print all possible subarray of an array
#include<iostream>
using namespace std;
int main () {
    int arr[] = {1,2,3,4,5,6};
    int start,end;
    int n = sizeof(arr)/sizeof(arr[0]);                          
    // Outer loop: selects the starting index of the subarray
    for  (int start = 0; start < n; start++) {
        // Middle loop: selects the ending index of the subarray
        for ( end = start; end < n; end++) {
            // Inner loop: prints the elements of the subarray from start to end
            for (int i = start; i <= end; i++) {
                cout << arr[i];
            }  
            cout << " ";
        }
        cout << endl; // Print a new line after each subarray
    }
}        
 /*You divide sizeof(arr) by sizeof(arr[0]) to get the number of elements in the array because:        
       ~ sizeof(arr) gives the total size of the array in bytes.
       ~ sizeof(arr[0]) gives the size of one element in bytes.*/