// To find the sum of the diagonals of a square matrix, basically a 2d array  with equal no of rows and columns.
#include <iostream>
using namespace std;

int DiagonalSum (int matrix [][4], int rows, int columns) {
    int Psum = 0, Ssum = 0; // These are primary and secondary sum of matrix.
    
    for (int i = 0; i < rows; i++) {
         for (int j = 0; j < columns; j++) {
              if (i == j) {
                Psum += matrix[i][j];
              }
              if (i + j == rows - 1) {
                Ssum += matrix[i][j];
              }
         }
    } 
    int total  = Ssum + Psum;
    if(rows % 2 == 1) {
        Psum = Psum - matrix[rows / 2][columns / 2]; // If the matrix is odd, we need to subtract the middle element once as it gets counted twice.
        // This happens cuz of 0 based indexing.now i
    }
       return total;
}

int main () {
    int matrix[4][4] = {{1, 2, 3, 4}, {4, 3, 5, 1}, {6, 5, 4, 3}, {0, 8, 7, 6}};
    int rows = 4;
    int columns = 4;
    int result = DiagonalSum(matrix, rows, columns);
    cout << "The sum of the diagonals is : " << result << endl;
    return 0;
}