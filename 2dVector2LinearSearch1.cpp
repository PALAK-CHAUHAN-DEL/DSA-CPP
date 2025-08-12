// Linear serach on this 2d vector.
#include <iostream>
#include <vector>
using namespace std;
pair <int, int> search ( const vector <vector<int>> &vec, int key) {
     for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] == key) {
                return make_pair (i, j);
            }
        }
     }
     return make_pair (-1, -1); // When not found
}
int main () {
    vector <vector <int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int key = 5;
    pair <int, int> result = search (vec, key);
    if (result.first != -1) {
        cout << "Key found at (" << result.first << ", " << result.second << ")" << endl;
    } else {
        cout << "Key not found!" << endl;
    }
    return 0;
}