//To understand the concept of comparator, watch lec 27 for explanation.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comparator (pair <int, int> p1, pair <int, int> p2) {
    if (p1.second > p2.second) { // We have created a function that  if held true, 
        // gives outint arranged in ascending order on the basis of second value in the pair.
        return false;
    } else {
        return true;
    }    
}

int main () {
    vector < pair <int, int>> vec = {{3,1}, {2,1}, {4,1}, {1,2}};
    sort (vec.begin(), vec.end(), comparator);
    for ( auto x : vec) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
} // The output is arranges in ascending order on the basis of the second element of the pair.
