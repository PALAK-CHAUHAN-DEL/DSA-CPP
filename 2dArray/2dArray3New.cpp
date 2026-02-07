// Use of new to allocate memory to this 2d array.
// Refer to pg 67 of notebook back.This concept is out of my undestanding as of now.

#include <iostream>
using namespace std;

int main () {
    int rows = 3;                   // 1. Declare number of rows
    int cols = 4;                   // 2. Declare number of columns

    int **arr = new int*[rows];     // 3. Declare a pointer to pointer (2D array)
                                    //    Allocate an array of int pointers (one for each row)

    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];     // 4. For each row, allocate an array of ints (columns)
    }

    // (You could use arr[i][j] to access elements here)

    // Don't forget to free the allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];            // 5. Free each row's memory
    }
    delete[] arr;                   // 6. Free the array of pointers

    return 0;
}