//Wap to find the max column sum in a 2D array.
// Written it myself. Good going Palak.

#include <iostream>
using namespace std;

int maxColumn (int matrix[][3], int row) {
    int column = 4;
    int maxSum = INT_MIN;
    for (int j = 0; j < column; j++) {
        int sum = 0;
        for (int i = 0; i < row; i++) {
            sum += matrix[i][j];
        }
        maxSum = max (maxSum, sum);
    }
    return maxSum;
}

int main () {
    int matrix[4][3] = {{1, 2, 3}, {4, 3, 5}, {8, 8, 7}, {9, 7, 5}};
    int row = 4;
    int result = maxColumn (matrix, row);
    cout << "The max colum sum is : " << result << endl;
    return 0;
}