// To understand the concept of unordered maps.
#include <iostream>
#include <unordered_map>
using namespace std;
int main () {
    unordered_map <string, int> um;
    um.insert({"b", 1});
    um.emplace("c", 2);
    um["d"] = 3;

    for (auto p : um) {
        cout << p.first << "," << p.second << endl;
    } // note that we write p.first and not um.first.
    return 0; // Also the output is in a random order.
} 