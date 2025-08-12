// write a code to find the majority element in a vector!
// watch lec 11 for explanation.
#include <iostream>
#include <vector>
using namespace std;
int majorityElement (vector <int> vec) {
    int n = vec.size();
    for ( int x : vec) {
        int frequency = 0;
        for (int j : vec) { //NOTE : Here in the range loop, x is the value and not the index.
            if (x == j) {
                frequency ++;
            }
        } if (frequency > n/2) {
            return x;
        }
    }  return -1;
}
 int main () {
    vector <int> vec = {1,2,3,4,3,3,3,3,3};
    int result = majorityElement(vec);
    cout << "The majority element in the given array is : ";
    if (result != -1) {
        cout << result;
    } else {
        cout << "No majority element found!";
    }
    return 0;
 }