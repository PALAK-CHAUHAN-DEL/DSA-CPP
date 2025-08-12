// Problem no. 75 on leet code, this one will be solved with brute force approach.
// solving using the built in sort function of c++ library.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortNum (vector <int> &vec) {
    sort (vec.begin() ,vec.end());
}

int main () {
    vector <int> vec = {2,0,2,1,1,0,1,2,0,0};
    sortNum (vec);
    for (int x : vec) {
        cout << x << " ";
    } 
    cout << endl;
    return 0;
}