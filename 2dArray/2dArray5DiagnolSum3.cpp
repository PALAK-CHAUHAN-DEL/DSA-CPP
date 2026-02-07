// Better than other codes as it has O(n) time complexity, while the others had O(n^2) tiem complexity.
// Watch lec 35 for explanation.As for  same non of rows and columns we don't need to run teo loops.
#include <iostream>
using namespace std;

int diagonalSum(int matrix[][4], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];           // Primary diagonal
        sum += matrix[i][n - i - 1];   // Secondary diagonal
    }
    if (n % 2 == 1) {
        sum -= matrix[n / 2][n / 2];   // Subtract center if counted twice
    }
    return sum;
}

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {4, 3, 5, 1},
        {6, 5, 4, 3},
        {0, 8, 7, 6}
    };
    int n = 4;
    cout << "Diagonal sum: " << diagonalSum(matrix, n) << endl;
    return 0;
}