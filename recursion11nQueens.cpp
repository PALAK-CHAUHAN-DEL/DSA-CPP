// Same as problem 51 on leetcode. Watch lec 46 for explanation.
#include <iostream>
#include <string>
#include <vector>
using namespace std;
// In this q we will be placing queens row by row, so is why col is not a parameter in nQueens
bool isSafe( vector<string> &board, int row, int col, int n) {
        // Horizontal threat
        for (int i = 0; i < n; i++) {
            if (board[row][i] == 'Q') {
                return false; // not safe
            }
        }
        // Vertical threat
        for (int i = 0; i < n; i++) {
            if (board[i][col] == 'Q') {
                return false; // not safe if there is queen at any of these vertical positions..
            }
        }
        /* NOTE ~ We don't check the lower diagonal as we haven't yet placed any queen down there...so uk...*/

        // Upward right diagonal threat
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
             if (board[i][j] == 'Q') {
                return false; // Not safe
             }
        }
        // Upward left diagonal threat
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false; // Not safe
            }
        }
        return true; // Safe if none of the above cases is false.
    }

    void nQueens (vector<string>& board, int row, int n, vector<vector<string>> &ans) {
        if (row == n) {
            ans.push_back(board);
            return ;
        }
        for (int j = 0; j < n; j++) { //Out of these 4 col positions of j, at some different col, the arrangement are possible and so are stored in ans.
            if (isSafe(board, row, j, n)) { // Row remains same as as '.' & 'Q' are to be placed for different col of a row.
                board[row][j] = 'Q'; //Palce a queen here as this position is safe.
                nQueens (board, row + 1, n, ans); // Check for the position to place the next queen
                board[row][j] = '.'; // We have reached here after checking that previous placement of Q has left no safe place for placement of this one
                // so go back and change the position of the previous Q and put a '.' here as to symbolise that this position is not safe a and cannot be placed.
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board (n, string(n, '.')); // THis means we are initialising a vector of n strings, where wach string is initialised with n dots ('.')
        vector<vector<string>> ans;
        nQueens(board, 0, n, ans); // All the values that we enter here needs to defined here before passing to the func.
        return ans;
    }

int main () {
    int n = 4;
    vector<vector<string>> result = solveNQueens(n);
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << "\t";
        }
    cout << endl;
    }
    return 0;
}