// As always to understand the concept of 2D arrays, watch lec 35 for explanation.
// refer to page 62 back of notebook for this.
#include <iostream>
using namespace std;

int main () {             // creating and printing a basic matrix.
    int matrix[2][3] = {  // this was one way of creating a 2D array.
        {1, 2, 3},
        {4, 5, 6}
    };  
    // accessing individual elements of the matrix
    cout << "The matrix at the given index is : " << matrix[1][1] << endl;
    // replacing the value of an element.
    matrix[1][1] = 10;
    cout << "The new value is : " << matrix[1][1] << endl;

 
    int matrix2[2][3] = {{1, 2, 3}, {4, 5, 6}}; // each row is written in it's own curly braces.
    int rows = 2; // it is not mandatory to define rows and coulmns. We do this so that we can use them later on for accessing the elements and for other operations.
    int columns = 3; // rows and columns are the name of the variable we have given, we could have named them anything.

    for (int i = 0; i < rows; i++) { // this outer loop prints the no. of rows.
        for (int j = 0; j < columns; j++) { // This takes control of the columns.
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}