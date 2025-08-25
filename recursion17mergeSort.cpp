// Watch lec 51 for explanation. Merge sort works on the technique of divide and conquer.
// Merge sort is a technique using which any linear structure can be sorted in ascending or descending order....it uses recursion and backtracking.
#include <iostream>
#include <vector>
using namespace std;

void merge (vector<int> &arr, int st, int mid, int end) {
    vector<int> temp;
    int i = st, j = mid + 1;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {  // here changing the sign < to > will sort the arr in descending order.
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {  // If not all elements of left array are traversed..
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end) {
        temp.push_back(arr[j]); // If not all elements of right array are traversed..
        j++;
    }
    for (int i = 0; i < temp.size(); i++) { // Copying all elements of temp to the original array..
        arr[st + i] = temp[i];
    }
}

void mergeSort (vector<int> &arr, int st, int end) {
    if (st < end) {
        int mid = st + (end - st) / 2;
        mergeSort (arr, st, mid); //Left half
        mergeSort (arr, mid + 1, end); //Right half
        merge (arr, st, mid, end);
    }
}

int main () {
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    mergeSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

