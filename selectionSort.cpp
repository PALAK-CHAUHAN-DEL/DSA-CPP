// watch lec 24 for explanation....here we push the smallest element to the start.
// a bit complicated than the  bubble sort...just watch lec.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void selectionSort (int arr[], int n) {
    for (int  i = 0; i < n-1; i++) { // we have written n-1 here cuz when all other elements fall in place, the last one get's settled automatically.
        int smallestIndex = i; //starting with the initial value of i, it declares every i as the smallest and the inner for loop gives the correct smallest index. 
        for (int j = i + 1; j < n; j++) {  // the inner for loop to find the least value in the unsorted array as mentiones in the lec.
            if (arr[j] < arr[smallestIndex]) { // with every run it returns the smallest index value.
                smallestIndex = j; //smallest index is updated with every true if codition and next comparision is made is made on that basis.
            } // j=i+1 is taken as the condition as all elements before that are sorted.     
        }
            swap (arr[i], arr[smallestIndex]);
    }
}
void printArray (int arr[], int n) {
    for (int  i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
int main () {
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort (arr, n);
    printArray (arr, n);
    return 0;
}
/* 
With every iteration of i, we initialise the value at i index as the smallest value then with every iteration of j, we compare and update each smallest index
and finally the inner for loop returns the correct smallest value. All what u have to do is to just dry run the code and u will understand everything.
Just do that once properly.*/
