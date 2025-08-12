// write a function in vectors to print max subarray sum using kadane's algorithm
#include <iostream>
#include <vector>
using namespace std;
// watch lec 10 of apna cllg for indepth explanation of this code..this is best approach to solve this problem...
// this is problem 53 ini leet code
int maxSubarray (vector<int>& nums) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    for  (int i = 0; i < nums.size(); i++) {
        currentSum += nums[i]; 
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0)
            currentSum = 0; // Reset currentSum if it becomes negative
    }
    return maxSum;  
}
int main () {
    vector <int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubarray(nums);
    cout << "Maximum subarray sum is: " << result << endl;
    return 0;
}
