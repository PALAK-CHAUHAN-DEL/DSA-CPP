// To find the max row sum...watch lec 35 of dsa series. I have solely written this code myself and it did work in the 1st go!
#include <iostream>
using namespace std;

int main () {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {1, 1, 1},};
    int rows = 3;
    int columns = 3;
    int maxSum  = INT_MIN;   // initially i have initialised this to 0, but then chand=ged it as per the video.
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
        }
    }
    cout << "The max row sum is : " << maxSum << endl;
    return 0;
}