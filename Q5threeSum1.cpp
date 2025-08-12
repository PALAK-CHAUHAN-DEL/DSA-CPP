// Problem 15 on leetcode, watch lec 39 for explanation.Brute force approach to this problem.
// We are basically supposed to find pairs of 3 no. that add up to 0.
// Just watch lec for understanding, couldn't think of this brute force too myself.
#include <iostream>
#include <vector>
#include <algorithm> 
#include <set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    set <vector<int>> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (nums[i] + nums[j] + nums[k] == 0 && i != j && j != k && i != k) {
                    vector <int> triplet = {nums[i], nums[j], nums [k]};
                    sort (triplet.begin(), triplet.end());
                    if (s.find(triplet) == s.end()) {
                        s.insert (triplet);
                        ans.push_back(triplet);
                    }
                }
            }
        }
    }
    return ans;
}

int main () {
    vector <int> nums = {-1,0,1,2,-1,-4};
    vector <vector<int>> result = threeSum (nums);
    cout << "The triplets that add up to 0 are : " << endl;
    for (int i = 0; i < result.size(); i++) {      // OR ~ for (const auto& triplet : result) {
        for (int j = 0; j < result[i].size(); j++) {  //         for (int num : triplet) {
            cout << result[i][j] << " ";           //           cout << nums << " ";
        }                                          //         }
        cout << endl;                              //         cout << endl;
    }                                              //       }    
    return 0;                                      
} 
// I didn't knew how to print the result using any of these loops.