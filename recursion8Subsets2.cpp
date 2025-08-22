// Same as problem 90 on leetcode, watch lec 44 for explanation.
// This q is almost same as recursion7StoreSubsets.cpp, pls just watch the lec and try to understand.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void  getAllSubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allSubsets) {
    if (i == nums.size()) {
        allSubsets.push_back(ans);
        return;
    }
    
    // Include the current element
    ans.push_back(nums[i]);
    getAllSubsets(nums, ans, i + 1, allSubsets);
    
    // Exclude the current element
    ans.pop_back();
    while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
        i++; // Skip duplicates
    }
    getAllSubsets(nums, ans, i + 1, allSubsets);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array to handle duplicates
        vector <vector<int>> allSubsets;
        vector<int> ans;
        getAllSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }

int main () {
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = subsetsWithDup(nums);
    for (const auto& subset : result) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}