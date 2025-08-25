// Same as q 37 on leetcode, watch lec 47 for explanation.
// A sudoku is a 9x9 grid. Almost similar to nQueens problem, the recusion perob before this...try to understand this one.
#include <iostream>
#include <vector>
using namespace std;

bool isSafe (vector<vector<char>> &board, int row, int col, char dig) { // We will use 0 based indexing
    // Horizontal 
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == dig) {
            return false;
        }
    }
    // Vertical
    for (int i = 0; i < 9; i++) {
       if (board[i][col] == dig) {
           return false;
       }
    }
    // grid
    int srow = (row / 3) * 3;
    int scol = (col / 3) * 3;
    for (int i = srow; i < srow + 3; i++) {
        for (int j = scol; j < scol + 3; j++) {
            if (board[i][j] == dig) {
                return false;
            }
        }
    }
    return true;
}

bool helper (vector<vector<char>> &board, int row, int col) {
    if (row == 9) { // As we are filling it row wise.
        return true; // we have successfully filled the entire board
    }
    int nextRow = row, nextCol = col + 1;
    if (nextCol == 9) {
        nextRow = row + 1;
        nextCol = 0;
    }
    if (board[row][col] != '.') { // If the cell is already filled, we move to the next cell
        return helper (board, nextRow, nextCol);
    }
    for (char dig = '1'; dig <= '9'; dig++) {
        if (isSafe(board, row, col, dig)) {
            board[row][col] = dig;
            if (helper(board, nextRow, nextCol)) {
                return true;
            }
            board[row][col] = '.'; // Backtrack
        }
    }
    return false;
}

void solveSudoku (vector<vector<char>> &board) {
    helper(board, 0, 0);
}

int main () {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    solveSudoku(board);
    for (const auto &row : board) {
        for (char cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
    return 0;
}

/*Great question! In Sudoku, the board is divided into 9 subgrids (3x3 each). To check if a digit is present in the same subgrid, you need to find the starting row and column of the subgrid that contains the cell (row, col).

Here's how it works:

row / 3 gives you which subgrid row the cell is in (0, 1, or 2).
Multiplying by 3 ((row / 3) * 3) gives you the starting row index of that subgrid (0, 3, or 6).
Same for columns: (col / 3) * 3 gives you the starting column index.
Example:
If row = 5, col = 7:

row / 3 = 1 → srow = 1 * 3 = 3
col / 3 = 2 → scol = 2 * 3 = 6 So, the cell (5,7) is in the subgrid starting at (3,6).
This lets you loop over the correct 3x3 subgrid to check for duplicates.
If you just use / 3 without * 3, you only get the subgrid number, not the starting index.

*/