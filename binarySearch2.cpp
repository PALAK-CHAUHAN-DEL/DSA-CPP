// binary search using basic approach for an even array.
// watch lec 17 to understand the dry run of this code.
#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector <int> vec, int target) {
    int n = vec.size();
    int start  = 0, end = n - 1;
    while (start <= end) {
        int  mid = (start + end) / 2;
        if (vec[mid] < target) {
            start = mid + 1;
        } else if (vec[mid] > target) {
            end = mid - 1;
        } else 
              return mid;
    } return -1;
}
int main () {
    vector <int> vec = {1,2,3,4,5,6};
    int result = binarySearch(vec, 2);
    cout << "The index of the given target is : " << result << endl;
    return 0;
}

