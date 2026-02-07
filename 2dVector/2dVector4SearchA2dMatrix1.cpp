/* Same as problem no 74 on leetcode, watch lec 36 for explanation.
   The q is as follows : 1 ~ Each row is sorted in decreasing order.
   2 ~ The 1st int of each row is greater than the last int of the preivous row. 
   This is for an m x n matrix */

   // I have atleast understood most of it! Phew!

   #include <iostream>
   #include <vector>
   using namespace std;

   bool searchInRow (vector <vector<int>> vec, int key, int row) {
      int n = vec[0].size();
      int start = 0;
      int end = n-1; // As we are searching the element in the row;
      int mid = start + (end - start / 2);
      while (start <= end) {
         if (key == mid) {
            return true;
         } else if (key > vec[row][mid]) {
             start = mid + 1;
         } else {
             end = mid - 1;
         }
      } return false;
   }

   bool searchRow (vector <vector<int>> vec, int key, int row) {
      int m = vec.size(), n = vec[0].size();
      int startR = 0;
      int endR = m-1; // As we are searching the row.
      int midR = startR + (endR - startR / 2);
      while (startR <= endR) {
         if (key >= vec[midR][0] && key <= vec[midR][n-1]) {
            return searchInRow (vec, key, midR);
         } else if (key > vec[midR][n-1]) {
            startR = midR + 1;
         } else if (key < vec[midR][0]) {
            endR = midR - 1;
         } 
      }
      return false;
   }

   int main () {
      vector <vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
      int key;
      cout << "Enter the key to be searched : ";
      cin >> key;
      if (searchRow) {
         cout << "Key found!" << endl;
      } else {
         cout << "Key not found!" << endl;
      }
      return 0;
   }