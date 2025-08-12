// Watch lec 37 on leetcode for explanation. Problem no 54 on leetcode.
// I haven't writtten it myself, I have just managed to understand this problem.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
        vector<int> ans;

        while (srow <= erow && scol <= ecol) {
            // top
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }

            // right
            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }

            // bottom
            for (int j = ecol - 1; j >= scol; j--) {
                if (srow == erow) break; // Avoid double counting in case of single row
                ans.push_back(matrix[erow][j]);
            }

            // left
            for (int i = erow - 1; i > srow; i--) {
                if (scol == ecol) break; // Avoid double counting in case of single column
                ans.push_back(matrix[i][scol]);
            }

            srow++;
            scol++;
            erow--;
            ecol--;
        }
        return ans;
    }
};
/* scol = starting column and ecol = ending column, same is with row.*/
