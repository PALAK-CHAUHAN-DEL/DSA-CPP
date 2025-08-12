// Optimised approach to the two sum  problem which is problem 1 on leetcode and see sol from ec 38 of saseroes.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector <int> twoSum (vector <int> &arr, int tar) { // tar = target
  unordered_map<int, int> m;
  vector <int> ans;
  for (int i = 0; i < arr.size(); i++) {
    int first = arr[i];
    int second = tar - first;

    if (m.find(second) != m.end()) {
        ans.push_back(i); // Index of the first element.
        ans.push_back(m[second]); // The index of the second element.
        break;
    }
    m[first] = i; // For this check the end of the code.
  }
  return ans;
}

int main () {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(arr, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
}
/*The line m[first] = i; stores the index of the current element in the map, using the element's value as the key.

Why do we do this?
As you loop through the array, you want to remember where each value appeared.
If you later find a value that, together with a previous value, sums to the target, you can quickly look up the index of that previous value using the map.
Example:
Suppose arr = [2, 7, 11, 15] and target = 9.

On first iteration (i = 0), first = 2, second = 7.
m is empty, so nothing happens.
Store m[2] = 0.
On second iteration (i = 1), first = 7, second = 2.
m contains 2, so you found a pair:
m[second] gives index 0 (where 2 was found).
i is 1 (where 7 is found).
Why not return m[first] = i when no pair is found?
m[first] = i is just for storing the index for future lookups.
If no pair is found, the function returns an empty vector.
The map is only used during the search; its contents are not returned.
Summary:
m[first] = i; is used to remember the index of each value for quick lookup.
It is not returned—it's only used to help find a matching pair as you loop through the array.
*/