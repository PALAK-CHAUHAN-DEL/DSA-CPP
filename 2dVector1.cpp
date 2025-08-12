// Basics of 2D vectors, their declaration and all, refer to pg 66 of back of notebook..
#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector <vector <int>> vec (3, vector <int>(4));
    for (int i = 0; i < vec.size(); ++i) {  // size of rows
        for (int j = 0; j < vec[i].size(); ++j) {   // size of columns
            vec[i][j] = i * 10 + j; // Example initialization
        }
    }

    // Print the 2D vector
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec[i].size(); ++j) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
}
/* 3 rows (the outer vector has size 3)
4 columns (each inner vector has size 4)
So, vec is a 3x4 "matrix" of integers, where all values are initialized to 0 (the default for int).*/