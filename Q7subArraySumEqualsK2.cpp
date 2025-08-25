// Problem 560 on leetcode, watch lec 41 for explanation, this is an optimised approach to this prob.
// There will be no use of nested loop here. This is called the prefix sum approach. It will be used at many other places.
// All what i am saying is just try to understand it well...
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum (vector<int> &nums, int k) {
    int n = nums.size();int count = 0;
        vector<int> prefixSum(n, 0);

        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        unordered_map<int, int> m; // prefix sum -> frequency
        for (int j = 0; j < n; j++) {
            if (prefixSum[j] == k) count++;

            int val = prefixSum[j] - k;
            if (m.find(val) != m.end()) {
                count += m[val];
            }

            m[prefixSum[j]]++;
        }
        return count;
}

int main () {
    vector <int> nums = {9, 4, 20, 3, 10, 5};
    int k = 33;
    int result = subarraySum (nums, k);
    cout <<  "Total no of sub arrays with sum equals k are : " <<  result;
    return 0;
}