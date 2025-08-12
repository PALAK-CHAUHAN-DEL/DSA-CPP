// Problem 287 on leetcode, watch lec 38 for explanation. Refer to pg 69 of note book back...
// So basically this was the 1st approach but this is not correct as per the constrains in the q problem.
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findDuplicate (vector <int> &nums) {
    unordered_set <int> s;
    for (int val : nums) {
        if (s.find (val) != s.end()) {
            return val;
        }
        s.insert(val);
    }
    return -1; 
}

int main () {
    vector <int> nums = {1, 3, 4, 2, 2};
    int result = findDuplicate (nums);
    cout << "The repeated value is : " << result << endl;
    return 0;
}