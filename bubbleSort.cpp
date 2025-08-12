// to understand the concept of bubble sort...watch lec 24 of dsa series.
// here we try to push the largest element to the last.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort (int arr[], int n) { // tho this returns true and false values it is not named as bool as it does not return these values to the main caller function.
     for (int i = 0; i < n-1; i++) {
        bool isSort = false;

        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                isSort = true;
            }   
        }
        if (!isSort) { // if the array is already sortred then no more function will be executed.
            return;
        }
    }
}
void printArray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
int main () {
    int arr [] = {4,1,5,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n); //This one 1st prints the normal array that we have input
    bubbleSort(arr, n); //& this one sorts the array by calling htat function
    printArray(arr, n); // This one prints the sorted array at last.
    return 0;
}