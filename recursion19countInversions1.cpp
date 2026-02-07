// Watch lec 54 of dsa series.
// This is the brute force approach to this problem. It was pretty simple but will not be accepted on leetcode ...also written it myself...nthg to to proud of tho..
// It's TC is O(n^2)..as there is a loop within a loop.
#include <iostream>
#include <vector>
using namespace std;

int count (int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}

int main () {
    int arr[] = {6, 3, 5, 2, 7};
    int n = sizeof (arr) / sizeof (arr[0]);
    cout << "The count of inversions is : " << count(arr, n) << endl;
}
