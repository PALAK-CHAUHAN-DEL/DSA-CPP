// Wap to find the min value element in a rotated sorted array, same a sproblem 154 on leetcode.
#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;
        while (start < end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] < nums[end]) {
                end = mid;
            } else if (nums[mid] > nums[end]) {
                start = mid + 1;
            } else {
                end--; // When nums[mid] == nums[end], reduce end by 1
            }
        }
        return nums[start]; // We could also have returned nums[end] and got the same ans as start = end at this point.
    }
int main () {
    vector <int> nums = {1, 3, 5};
    int result = findMin(nums);
    cout << "The min element is : " << result;
    return 0;
}