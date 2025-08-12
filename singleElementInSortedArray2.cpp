// trying out my luck....it did work ...oh god ...thank u so much...
// solution to this problem using binary search...as always watch lec 20 for explanation.
#include <iostream>
#include <vector>
using namespace std;
 int singleElement (vector <int> vec) {
    int n = vec.size();
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid == 0 && vec[0] != vec[1]) return vec[mid];
        if (mid == n-1 && vec[n-1] != vec[n-2]) return vec[mid];
        if (vec[mid-1] != vec[mid] && vec[mid] != vec[mid+1]) return vec[mid];

        if (mid % 2 == 0) {
            if (vec[mid-1] == vec[mid]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        } else {
            if (vec [mid - 1] == vec[mid]) {
                start = mid + 1;
            }
        }
    } return 0;
 }
 int main () {
    vector <int> vec = {1,1,2,3,3,4,4,5,5};
    int result = singleElement (vec);
    cout << result << endl;
    return 0;
 }