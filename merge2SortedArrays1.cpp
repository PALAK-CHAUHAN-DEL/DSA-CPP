// watch lec 26 for explanation. I'll be writing this code with the help of gpt.
// writing this myself after understanding from gpt.

#include <iostream>
#include <vector>
using namespace std;
void merge (vector<int> &vec, int n, vector<int> &nums, int m) {
    vector <int> C(n + m); // writing n+m like this tells the size of this new vector.
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (vec[i] < nums[j]) {
            C[k++] = vec[i++];
        } else {
            C[k++] = nums[j++];
        }
    }
    while (i < n) {
        C[k++] = vec[i++];
    }
    while (j < m) {
        C[k++] = nums[j++];
    }
    for (int x : C) {
        cout << x << " ";
    } cout << endl;
}

int main () {
    vector <int> vec = {1, 2, 3, 0, 0, 0};
    int n = 3;
    vector <int> nums = {2, 5, 6};
    int m = 3;
    merge (vec, n, nums, m);
    return 0;
}






/*C[k++] = B[j++];
this line means that:
~ Assign the value of B[j] to C[k].
~ Then increment both k and j by 1.
*/

/*He main while (i < m && j < n) loop merges elements from both arrays as long as both have elements left.
When this loop ends, at least one array is fully traversed (all its elements have been merged).
The other array may still have some elements left.*/