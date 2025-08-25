// Same as problem 1752 on leetcode. Copilot's code.
#include <iostream>
#include <vector>
using namespace std;

// Check if array can be rotated to become sorted
bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }
    return count <= 1; // As this is a bool type func, it returns true if count <= 1 and false otherwise.
}

int main () {
    vector<int> nums  = {4, 5, 1, 2, 3};
    if (check(nums)) {
        cout << "The array can be rotated to become sorted." << endl;
    } else {
        cout << "The array cannot be rotated to become sorted." << endl;
    }
    return 0;
}

/*Certainly! Here’s a breakdown of the line:

if (nums[i] > nums[(i + 1) % n])

Explanation:

nums[i]: The current element in the array.
nums[(i + 1) % n]: The next element in the array.
(i + 1) % n uses the modulo operator % to wrap around to the start of the array when i is at the last index.
For example, if i is the last index (n-1), then (i + 1) % n becomes 0, so it compares the last element with the first element.
Purpose:
This line checks if the current element is greater than the next element (with wrap-around).

If true, it means there is a "drop" in the sorted order.
Why is this important?

In a sorted and rotated array, there should be at most one such "drop".
Example:
For nums = {4, 5, 1, 2, 3} and n = 5:

When i = 1, nums[1] = 5, nums[(1+1)%5] = nums[2] = 1
5 > 1 is true, so this is a "drop".
Let me know if you want a visual example or further clarification!*/