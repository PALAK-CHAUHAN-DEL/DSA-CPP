//To input a 2D array, similar nested loop will be used here as that used to print the 2D array.
#include <iostream>
using namespace std;

int main () { 

     // To input a 2D array.
    int matrix[2][3];
    int rows = 2;
    int columns = 3;
    cout << "Enter the value of be entered in matrix : ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    // loop to print this array.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// NOTE - While inputting the array, enter it this way: 1 2 3 4 5 6. Just don't forget to give spaces.

/*cin separates input by whitespace, but reads each value according to the type you ask for (int, char, etc.).
For integers, always separate them with spaces or newlines.*/