// A program to find the maximum column suum of the given 2d Vector.

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSum (const vector <vector<int>> &vec) {
    int sum = INT_MIN;
    for (int j = 0; j < vec[0].size(); j++) {
        int colSum = 0;
        for (int i = 0; i < vec.size(); i++) {
            colSum += vec[i][j];
        }
        sum = max (sum, colSum);
    }
    return sum;
}
int main () {
    vector <vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result = maxSum (vec);
    cout << "The max column sum is : " << result << endl;
    return 0;
}