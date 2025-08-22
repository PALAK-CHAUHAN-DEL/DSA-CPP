// Watch lec 43 for explanation. Problem no 704 on leetcode.
// both time and space complexity of this code are O(log n)
#include <iostream>
#include <vector>
using namespace std;

int binarySearch (vector<int> arr, int target, int start, int end) {
    
    int mid = start + (end - start) / 2;
    if (target == mid) {
        return mid;
    } else if (target > mid) {
        return binarySearch (arr, target, mid + 1, end);
    } else {
        return binarySearch (arr, target, start, mid - 1);
    }
    return -1;
}

int main () {
    vector <int> arr = {1, 2, 3, 6, 4, 5};
    int start = 0, end = arr.size() - 1;
    int target = 3;
    int result = binarySearch (arr, target, start, end);
    if (result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index: " << result << endl;
    }
    return 0;
}
