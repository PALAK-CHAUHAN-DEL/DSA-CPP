// Example of using size and capacity functions with vectors, also check notes for explanation and internal working of this function.
// Pg. 33 back of notebook.
#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector <int> vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << "Elements in the vector: ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size of vector: " << vec.size() << endl;
    cout << "Capacity of vector: " << vec.capacity() << endl;

    vec.push_back(3);
    vec.push_back(4);

    cout << "Vector after adding more elements : ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Size of the vector after adding more elements : " << vec.size() << endl;
    cout << "Capacity of vector after adding more element : " << vec.capacity() << endl;

     return 0;
}
