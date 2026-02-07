// Linear search on this 2D array, watch lec 35 for explanation.
#include <iostream>
using namespace std;

int main () {
    int matrix [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int columns = 4;
    int key = 1;
    bool found = false;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == key) {
                found = true;
                break;  // To exit the inner for loop.
            }
        } 
        if (found) { // This is to exit the outermost for loop.
            break;
        }
    }

    if (found) {
        cout << "Key found!" << endl;
    } else {
        cout << "Key not found!" << endl;
    } 
    return 0;
}
// If it's difficult to create sthg like this then we must just create a bool function 1st and then use int main.

