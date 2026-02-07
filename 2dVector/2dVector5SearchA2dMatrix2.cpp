// This q is a variation of 2dVector4SearchA2dMatrix1. Watch lec 36 for explanation.
// Problem 240 on leetcode...just watch lec if u don't understand.Q is mentioned at the last of the code with it'sconditions.
// Just watch lec....ok? 

#include <iostream>
 #include <vector>
 using namespace std;

 bool searchMatrix (vector<vector<int>>& matrix, int target) {
      int m = matrix.size(), n = matrix[0].size();
      int row = 0, col = n-1;
      while (row < m && col >= 0) {
         if (matrix[row][col] == target) {
            return true;
         } else if (matrix[row][col] < target) {
            row++;
         } else {
            col--;
         }
      }
      return false;
 }
/* You’re given an m × n integer matrix where:

Each row is sorted in ascending order from left to right.

Each column is sorted in ascending order from top to bottom.

Given a target integer, determine whether it exists in the matrix. Return true if found, else false.
AlgoMonster
Design Gurus

Constraints:
1 ≤ m, n ≤ 300

-10⁹ ≤ matrix[i][j], target ≤ 10⁹
*/
