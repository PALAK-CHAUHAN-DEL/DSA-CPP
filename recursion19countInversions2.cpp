// Q is same as recursion19countInversions1.cpp...again, just try to understand this.
// This is an optimal apporach to this q...which will be accepted on leetcode..
#include <iostream>
#include <vector>
using namespace std;

int merge (vector<int>& arr, int st, int mid, int end) {
    vector<int>temp;
    int i = st, j = mid + 1;
    int invCount = 0;
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]); // Same as doing i++ after pushing back, so 1st the work is done and then incrementing i.
        } else {
            temp.push_back(arr[j++]);
            invCount += (mid - i + 1); // Count inversions
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }
    while (j <= end) {
        temp.push_back(arr[j++]);
    }
    for (int k = 0; k < temp.size(); k++) { // Copying values of temp to original array.
        arr[st + k] = temp[k];
    }
    return invCount;
}
int mergeSort (vector<int>& arr, int st, int end) {
     if (st < end) {
        int mid = st + (end - st) / 2;
        int leftInvCount = mergeSort (arr, st, mid); // Left half
        int rightInvCount = mergeSort (arr, mid + 1, end); // Right half
        int invCount = merge (arr, st, mid, end);
        return leftInvCount + rightInvCount + invCount;
     }
     return 0;
}

int main () {
    vector<int> arr = {2, 4, 1, 3, 5};
    int result = mergeSort(arr, 0, arr.size() - 1);
    cout << "Number of inversions: " << result << endl;
    return 0;
}