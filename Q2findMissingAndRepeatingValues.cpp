// Watch lec 38 for sol, problem 2965 on leetcode.I couldn't understand the sol.
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector <int> findMissingAndRepeatingValues (vector <vector<int>> &grid) {
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size(); // No of rows is what this command gives.
    int a = -1, b = -1;

    int expSum = 0, actualSum = 0;

    for (int i = 0; i < n; i++) {  // Loop for finding the duplicate.
        for (int j = 0; j < n; j++) {
            actualSum += grid[i][j];

            if (s.find(grid[i][j]) != s.end()) {
                a = grid[i][j]; 
            }
            s.insert(grid[i][j]);
        }
    }
    expSum = (n*n) * (n*n + 1) / 2; // Eq's for missing value.
    b = expSum + a - actualSum;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}

int main () {
    vector<vector<int>> grid = {
        {9, 1, 7},
        {8, 9, 2},
        {3, 4, 6}
    };

    vector<int> result = findMissingAndRepeatingValues(grid);
    cout << "Repeating Element: " << result[0] << endl;
    cout << "Missing Element: " << result[1] << endl;

    return 0;
}
/*However, when the code runs int n = grid.size();,
 it's asking for the size of the outer vector, which corresponds to the number of rows.*/
