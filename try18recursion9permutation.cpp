// Waf to get all permutations of an array or string using recursion.
// Same as problem 46 on leetcode, watch lec 45 for explanation. Just try to understand the code, dry run it.
// Ask teacher....uk what this is same as....
#include <iostream>
#include <vector>
using namespace std;

void getPerms (vector <int> &nums, int idx, vector <vector<int>> &ans) {
    if (idx == nums.size()) {
        ans.push_back(nums);
        return;
    }
    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);
        getPerms(nums, idx + 1, ans);
        swap(nums[idx], nums[i]);
    }
}
vector<vector<int>> permute(vector<int>& nums) { // we are creating these extra functions to run them on leetcode as they are given there.
    vector <vector<int>> ans;
    getPerms(nums, 0, ans);
    return ans;
}

int main () {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = permute(nums);
    for (const auto& perm : result) {
        for (int num : perm) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
