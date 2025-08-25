// Same as problem rat in a maze in geeks for geeks
// Rat in a Maze problem (GeeksforGeeks style).......just try to understand this.
#include <iostream>
#include <vector>
using namespace std;

// Helper function to explore all paths
void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans) {
    int n = mat.size();
    // Check for out-of-bounds or blocked/visited cell
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || mat[r][c] == -1) {
        return;
    }

    // If destination is reached, add path to answer
    if (r == n-1 && c == n-1) {
        ans.push_back(path);
        return;
    }

    mat[r][c] = -1; // Mark cell as visited

    // Explore all four directions
    helper(mat, r+1, c, path+"D", ans); // Down
    helper(mat, r-1, c, path+"U", ans); // Up
    helper(mat, r, c-1, path+"L", ans); // Left
    helper(mat, r, c+1, path+"R", ans); // Right

    mat[r][c] = 1; // Unmark cell (backtrack)
}

// Function to find all paths
vector<string> findPath(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<string> ans;
    helper(mat, 0, 0, "", ans);
    return ans;
}

int main () {
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
    vector<string> paths = findPath(mat);
    for (const string &path : paths) {
        cout << path << endl;
    }
    return 0;
}