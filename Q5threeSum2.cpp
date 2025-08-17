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
        set<int> s; // we have defined it here so that it resets each time the outer loop runs to avoid copying the same value numerous times.

        for (int j = i + 1; j < n; j++) { // nums[j] is the second no.  here.
            int third = tar - nums[j];

            if (s.find(third) != s.end()) {
                vector<int> trip = {nums[i], nums[j], third};
                sort(trip.begin(), trip.end());
                uniqueTriplets.insert(trip); // After sorting to avoid pushing the same triplet again we use this unique as sets ignore insertion of duplicate values.
            }
            s.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(uniqueTriplets.begin(), uniqueTriplets.end());
    return ans;
} // I wasen't able to understand the logic and use of extra containers at 1st but then didn't give up and now i am clear with that.

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
// Let's see how u won't understnad this once u dry run it, all the logics will be cleared..

//-------------------------------------------------------------------------------

/*Explanation: for using extra set (unique).

You sort the triplet before inserting it into the set:
sort(trip.begin(), trip.end());
This ensures that triplets like {1, -1, 0} and {-1, 0, 1} are treated as the same triplet.
The set uniqueTriplets automatically ignores duplicate triplets, so only unique, sorted triplets are stored.*/