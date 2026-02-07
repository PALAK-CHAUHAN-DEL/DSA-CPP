 // unlike it's 1st code, here we'll create a separate pair function for linear search on an array. quite easy. But learnt a lot from this lil thing.
 // we have used this pair instead of bool as we wanted to return the pair of the cell and not whether the key was found or not.
 #include <iostream>
 using namespace std;

pair<int, int> search(int matrix[][3], int rows) {
    int key = 1;
    int columns = 3;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (key == matrix[i][j]) {
                return make_pair(i, j);
            }
        }
    }
    return make_pair(-1, -1); // indicates not found
}
int main () {
    int matrix [3][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};
    int rows = 3;
    pair<int, int> result = search(matrix, rows);
    if (result.first != -1) {
        cout << "Key found at the cell (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Key not found!" << endl;
    }
    return 0;
}     

/* You pass the matrix as a parameter so the function can search any matrix you provide, not because
 the user is inputting it. The function operates on the matrix you give it from main().*/
