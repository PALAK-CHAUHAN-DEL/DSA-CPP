// A better version of the previous approach, watch lec 39 for explanation.
// a+b+c = 0, then considering -a as the target each time the loop runs we can find possible combinations of b and c.
// This will be solved using hashing, again watch lec for better clarity. Just watch lec pls.
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        int tar = -nums[i];
        set<int> s;

        for (int j = i + 1; j < n; j++) {
            int third = tar - nums[j];

            if (s.find(third) != s.end()) {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip);
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    return ans;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    cout << "The required triplets that add up to 0 are : " << endl;
    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}