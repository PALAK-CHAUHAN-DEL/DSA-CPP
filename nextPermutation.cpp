// Same as problem 31 on leetcode. Watch lec 26 of dsa series for explanation.
// the brute force approach of it is not given in the lec, ask gpt for it. We will directly write the optimala approach.PDeveloper: Open Settings (JSON)
// Lexicographically means in dictionary order.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permutation (vector <int> &vec, int n) {
     // find pivot ...A[i] < A[i+1]
     int pivot = -1;
    for (int i = n - 2; i >= 0; i--) { // i = n - 2 as last index has no next element.
        if (vec[i] < vec[i+1]) {
            pivot = i;
            break;
        }
    } 
    // handling corner cases.
    if (pivot == -1) {  // as there can be case when we have an array indecreasing order.
        reverse (vec.begin(), vec.end());
        return; // we are asked to return the smallest no if the array is given in descending already.
    } 
    // finding the rightmost element greater than pivot and then swaping them. 
    for (int i = n - 1; i > pivot; i--) {
        if (vec[i] > vec[pivot]) {
            swap (vec[i], vec[pivot]);
            break; // we can break here as we have found the rightmost element greater than pivot.
        }
    }
    // reversing the elements from pivot + 1 to the end of the array.
    // basically reverse the increasing order elements into decreasing order elements.
    int i = pivot + 1, j = n - 1;
    while (i <= j) {
        swap (vec[i], vec [j]); // instead of writing i++ and j-- we could have combined them and written swap (vec[i++], vec[j--]);
        i++;                    // or insted of this complete while loop we could have written this one line by using the reverse function.
        j--;                    // reverse (vec.begin() + pivot + 1, vec.end());
    }
}
int main () {
    vector <int> vec = {1, 2, 3, 5, 4};
    int n = vec.size();
    permutation (vec, n);
    for ( int x : vec) {
    cout << x << " ";
    }
    return 0;
}
