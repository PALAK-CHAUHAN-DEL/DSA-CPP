// code for binary search....using basic approach for an --odd-- array.
// watch lec 17 for explanation of code.

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> vec, int target) {
    int n = vec.size();
    int start = 0, end = n - 1;

    while (start <= end) {
    int mid = (start + end) / 2; // Don't make a mistake of writing this outside the loop.
    if ( vec[mid] < target) {
        start = mid + 1;
    } else if ( vec[mid] > target ) {
        end = mid - 1;
    } else 
        return mid;
    } 
    return -1; 
}
int main () {
    vector <int> vec = {-1,0,3,4,5,12}; 
    int result = binarySearch (vec, 4);
    cout << "The index at which target is found is : " << result << endl;
    return 0;
}