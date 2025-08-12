// binary search in a rotated sorted array.In this code we basically return the index at which the target is located.
// watch lec 18 of dsa series for explanation.
// this is problem 33 on leetcode.
#include <iostream>
#include <vector>
using namespace std;

int binarySearch ( vector<int>vec, int target) {
    int n = vec.size();
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (vec [mid] == target) {
            return mid;
        }
        if (vec [start] <= vec [mid] ) { // if left array is sorted
            if (vec[start] >= target && target <= vec[mid]) { // if target lies in the left sorted array
                end = mid - 1;
            } else {
                start = mid + 1;
            } 
        } else { // right sorted
               if(vec [mid] <= target && target <= vec[end]) {
                start = mid + 1;
               } else {
                end = mid - 1;
               }
        }
    } return -1;
}
int main () {
    vector <int> vec = {4,5,6,7,0,1,2};
    int result = binarySearch (vec, 0);
    cout << "The index of the target  is : " << result << endl;
    return 0;
}