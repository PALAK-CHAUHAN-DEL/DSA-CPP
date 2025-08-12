// This is Shraddha mam's code, just with bit of changes.

#include <iostream>
using namespace std;

int diagonalSum(int mat[4][4], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                sum += mat[i][j];
            } else if (j == n - i - 1) {
                sum += mat[i][j];
            }
        }
    }
    if (n % 2 == 1) {
        sum -= mat[n / 2][n / 2]; // Subtract the middle element once if n is odd
    }

    return sum;
}

int main() {
    int matrix[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;

    cout << diagonalSum(matrix, n) << endl;
    return 0;
}
