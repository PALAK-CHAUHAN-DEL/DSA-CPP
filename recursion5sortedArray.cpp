// Using recursion check if the array is sorted or not.Just watch lec 43 for explanatiion.
#include<iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int n) {
    if (n == 1 || n == 0) {
        return true;
    } 
    return arr[n-1] >= arr[n-2] && isSorted (arr, n-1);
}
int main () {
    vector <int> arr = {1, 9, 3, 4, 6};
    cout << isSorted (arr, arr.size()) << endl;
    return 0;
}