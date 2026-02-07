// Watch lec 53 for explanation...lec 53 means not of dsa how it is said, but of the order in which they are all uploaded, after the announcement.
// Quick sort is based on a special concept called pivot and partition. Here we will be picking the last element as the pivot. Just try to understand....
#include <iostream>  // Watch last part of lec, it's imp...abt space and time complexity.
#include <vector>
using namespace std;

int partition (vector<int> &arr, int st, int end) {
    int idx = st - 1, pivot = arr[end];
    for (int j = st; j < end; j++) {
        if (arr[j] <= pivot) { // Just a > sign here will make it sort in descending order.
            idx++;  // this <= above sends lesser elements to the left and if we change thte sign then greater elements to lrft.
            swap(arr[idx], arr[j]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);
    return idx; 
}

void quickSort (vector<int> &arr, int st, int end) {
    if (st < end) {
        int pivInd = partition(arr, st, end);
        quickSort(arr, st, pivInd - 1);
        quickSort(arr, pivInd + 1, end);    
    }
}

int main () {
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    quickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

/* abt the time complexity of quick sort, it's avg TC is O(log n)
but in the worst case when the pivot is the largest element each time, TC becomes O(n^2)..
Ex of such a case is : [1, 2, 3, 4, 5, 6]...watch lec for explanation.*/

