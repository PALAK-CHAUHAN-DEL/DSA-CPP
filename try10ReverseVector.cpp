//write a reverse code on a vector by defining a function
// just couldn't understand anything abt it!
// same as vectorReverse.cpp

#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n / 2; i++) {
        swap(v[i], v[n - i - 1]);
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    reverseVector(v);
    for (int x : v) cout << x << " ";
    return 0;
}