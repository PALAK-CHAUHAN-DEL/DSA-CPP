// A brute force approach to the problem no 1 of two sum on leetcode.
// Watch lec 38 for explanatiuon. We have to return the index of the elements that add up to the target.
#include <iostream>
#include <vector>
using namespace std;

vector <int> searchIndex(vector <int> vec, int target) {
      int n = vec.size();
      int sum = 0;
      for (int i = 0; i < n; i++) {
         for (int j = i + 1; j < n; j++) {
            if (vec[i] + vec[j] == target && i != j) {
                  vector <int> ans;
                  ans.push_back(i);
                  ans.push_back(j);
                  return ans;
            }
         }
      }
      return vector<int>();  // Return an empty vector if no solution is found
}
int main () {
      vector <int> vec = {2, 3, 4, 5, 4, 6};
      int target = 5;
      vector <int> sol = searchIndex (vec, target);
      if (sol.size() == 0) {
            cout << "No solution found" << endl;
      } else {
            cout << "The indices of the elements that add up to the target are: " << sol[0] << " and " << sol[1] << endl;
      }                                      
}