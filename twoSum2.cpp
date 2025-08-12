// A better approach than the brute force approach to leetcode problem 1.
// Watch lec 38 for explanation. This approach is also called a two pointer approach.

#include <iostream>
#include <vector>
using namespace std;

void bubbleSort (vector <int> &vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i -1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}

vector <int> searchIndex (vector <int> &vec, int target) {
    int start = 0; 
    int end = vec.size() - 1;
    while (start <= end) {
        if (vec[start] + vec[end] == target) {
            return {start, end};
        } else if (vec[start] + vec[end] < target) {
            start++;
        } else {
            end--;
        }
    }
    return {};
}

int main () {
    vector <int> numbers = {2, 7, 11, 15};
    int target = 9;

    // Sort the array
    bubbleSort(numbers);

    // Search for the target
    vector <int> indices = searchIndex(numbers, target);

    // Print the result
    if (!indices.empty()) {
        cout << "Target found at indices: ";
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}

