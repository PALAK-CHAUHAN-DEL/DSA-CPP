//write a function to reverse a vector in just one loop!
// try to write it yourself...
#include <iostream>
#include <vector>
using namespace std;
void reverse (vector <int>& vec) { // dont forget to write this and...&...
    int n = vec.size();            // as this makes change to the original vector as well
    for (int i = 0; i < n/2; i++){
        swap ( vec[i], vec [n - i - 1]);
    }
}

int main () {
    vector <int> vec = {1,2,3,4,5,6};
    reverse (vec);
    for (int x : vec) 
        cout << x << " ";
    return 0;
}

