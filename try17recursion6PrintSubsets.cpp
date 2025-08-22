// Just remove that try 17 and this is the copy of that code, clearly a code that I am not able to understand, ask teacher....dry run isin't helping either, i am getiing stuch at a point each time.
// Watch lec 44 for explanation. This q is the base of all other problems.
// The total no of subsets of a set of size n is 2^n. Where the null subset too is included.
#include <iostream>
#include <vector>
using namespace std;

void printSubsets (const vector <int> &arr, vector <int> &ans, int i) {
if (i == arr.size()) {
    for (int j = 0; j < ans.size(); j++) {
        cout << ans[j] << " ";
    }
    cout << endl;
    return;
}
ans.push_back(arr[i]);
printSubsets(arr, ans, i + 1);
ans.pop_back();
printSubsets(arr, ans, i + 1);
}
int main () {
    vector <int> arr = {1, 2, 3};
    vector <int> ans; // A vector created to store the subsets
    printSubsets(arr, ans, 0);
    return 0;
}
