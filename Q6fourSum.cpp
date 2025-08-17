// Brute force approach to q 18 on leetcode. Warch lec 40 for explanation.
// We will use a 2-pointer approach to solve this prob, and for that we need to sort the array.
// 2-pointer will be used for getting to the 3rd and 4th values.Just try to understand why continue is used at some  points ans i++ at others.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort (nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; // continue means run the above loop again and don't execute the lower part of the code from the  point of continue.
            for (int j = i + 1; j < n;) {

                int p = j + 1, q = n - 1;
                while (p < q) {
                    long long sum = (long long) nums[i] + (long long) nums[j] + (long long) nums[p] + (long long) nums[q];
                    if (sum > target) {
                        q--;
                    } else if (sum < target) {
                        p++;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[p], nums[q]});
                        p++; q--;
                        while (p < q && nums[p] == nums[p - 1]) p++; // This is to avoid duplicates, we will skip the same value at p.
                    }// Also in these i++ cases we are using manual incrementing, so is why it is possible to use these instead of continue.
                }
                j++; // This is so that j doesn't increment twice if the next condition holds true, so is why it is not in the for loop.
                while (j < n && nums[j] == nums[j-1]) j++; // We have written it at the last as we want to run the loop once atleast even if the values are the same at j and j + 1;
            } // We have used j++ instead of continue in the above line as continue would have skiped the rest of the lower code and would have executed the above part again., use them wisely.
        }
        return ans;
    }

    int main () {
        vector <int> nums = {1, 0, -1, 0, -2, 2};
        int target = 0;
        vector <vector<int>> result = fourSum (nums, target);
        for (int i = 0; i < result.size(); i++) {
            for (int j = 0; j < result[i].size(); j++) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
        return 0;
    }
    /*Great question!
continue is used inside loops (like for or while) to skip the rest of the current iteration and move to the next one.
j++ and p++ are manual increments—you use them when you want to move to the next index, but still need to execute some code after incrementing.

Why use while with j++ or p++?
The while loop lets you skip over duplicates (e.g., while (j < n && nums[j] == nums[j-1]) j++;).
You use j++ or p++ inside while to keep moving forward until you find a new value.
Why not use if with j++ or p++?
If you use if, you only skip one duplicate.
With while, you skip all consecutive duplicates.
Why not use continue here?
continue would skip the rest of the code in the loop, but you want to increment and then check for more duplicates, so you need a loop (while) instead.
Summary:

Use continue with if when you want to skip the rest of the loop iteration.
Use j++ or p++ with while to skip all duplicates and keep moving forward.
Let me know if you want a code example!*/