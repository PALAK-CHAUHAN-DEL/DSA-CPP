// a code with optimised way to calculate mid in binary search.
// watch lec 17 for explanation....i couldn't get that anyways.

#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector <int> vec, int target) {
    int n = vec.size();
    int start = 0, end = n-1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (vec [mid] > target) {
            end = mid - 1;
        } else if (vec [mid] < target) {
            start = mid + 1;
        } else
            return mid;
    }   return -1;
}

int main () {
    vector <int> vec = {1,2,3,4,5,6};
    int result = binarySearch (vec, 5);
    cout << "The index of the target is : " << result << endl;
    return 0;
}

/*Why is this better than (start + end) / 2?
If start and end are both large integers, adding them directly (start + end) can exceed the maximum value an integer can store, causing overflow and resulting in incorrect calculations or even program errors.
By using start + (end - start) / 2, you first calculate the difference (end - start), which is guaranteed to be within the range of the array, and then add it to start. This keeps the calculation safe and within the valid range of integer values.
Example
Suppose start = 2,000,000,000 and end = 2,000,000,010:

(start + end) / 2 = (4,000,000,010) / 2 could overflow a 32-bit integer.
start + (end - start) / 2 = 2,000,000,000 + (10 / 2) = 2,000,000,000 + 5 = 2,000,000,005 (no overflow).
Summary
Prevents overflow for large values of start and end.
Always safe for all valid input ranges.
Recommended best practice for binary search implementations.*/