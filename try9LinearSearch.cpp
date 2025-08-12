// write a code for linear search
// understood....try to write it yourself

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (v[i] == key) {
            cout << "Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
    return 0;
}