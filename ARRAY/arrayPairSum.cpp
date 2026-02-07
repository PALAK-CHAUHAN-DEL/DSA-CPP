// Return pair in sorted array with target array.
// watch lec 11 of dsa series for explanation
// soling this one with brute force approach...try not to make minor errors!
#include <iostream>
#include<vector>
using namespace std;
vector <int> pairSum (vector <int> vec) {
    int n = vec.size();
    int target = 9;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j <n; j++) {
            if (vec[i] + vec[j] == target) {
            vector <int> ans;
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;
            }
        }
    }
    return {};
}
int main () {
    vector <int> vec = {1,2,3,4,5,6,7,8};
    vector <int> result = pairSum(vec);
    cout << "The pair with the given target sum is : ";
    for (int x : result) {
        cout << x << ", ";
    }
    return 0;
}