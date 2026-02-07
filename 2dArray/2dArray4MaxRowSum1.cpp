// Wap to find the maximum row sum in a 2D array.
// Written it myself. Good going.
#include <iostream>
using namespace std;
int maxRowSum (int matrix[][3], int row, int column) {
    int mxSum = INT_MIN;
    for (int i = 0; i  < row; i++){
        int sum = 0;
        for (int j = 0; j < column; j++) {
            sum += matrix[i][j];
        }
        mxSum = max(mxSum, sum);
    }
    return mxSum;
}

int main () {
    int matrix[3][3];
    int row = 3, column = 3;
    cout << "Enter the elements of the array (3x3) : " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }
    int maxSum = maxRowSum(matrix, row, column);
    cout << "Maximum row sum is: " << maxSum << endl;
    return 0;
}