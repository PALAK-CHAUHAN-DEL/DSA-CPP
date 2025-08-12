//This is the correct approach acc to the q on leetcode, for other details refer to it's 1st part.
// Just watch lec 38 for explanation, we'll be solving it with the help of listed pointers.This is also called the slow and fast approach.
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate (vector <int> &nums) {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main () {
    vector <int> nums = {1, 3, 4, 2, 2};
    cout << "The duplicate value is : " << findDuplicate(nums) << endl;
    return 0;
}