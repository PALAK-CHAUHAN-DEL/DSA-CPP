// Return pair in sorted array with target array.
// this is a more optimized approach for this problem...watch lec 11 of dsa series for explanatin.
#include <iostream>
#include <vector>
using namespace std;
vector <int> pairSum(vector <int> vec) {
    int n = vec.size();
    int target = 9;
    int start = 0, end = n - 1;
    vector <int> ans;
          while (start < end) {
                int sum = vec[start] + vec[end];
                if (sum > target) {
                    end--;
                } else if (sum < target) {
                    sum++;
                } else {
                    ans.push_back(vec[start]);
                    ans.push_back(vec[end]);
                    return ans;
                }
     } return {}; // if none of the above condition is satisfied
}
int main() {
    vector <int> vec = {1,2,3,4,5,6,7,8};
    vector <int> result = pairSum(vec);
    cout << "The pair with the given target sum is: ";
    for (int x : result) {
        cout << x << ", ";
    }
    return 0;
}