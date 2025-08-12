// To understand the concepts of vector iterators, watch lec 27 for explanation.
#include <iostream>
#include <vector>
using namespace std;
 int main () {
    vector <int> vec = {1, 2, 3, 4, 5};
    vector <int> :: iterator it;
    for (it = vec.begin(); it!= vec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // using backward loop :
    vector <int> :: reverse_iterator rit;
    for (rit = vec.rbegin(); rit != vec.rend(); rit++) {
        cout << *rit << " ";
    }
    cout << endl;
    return 0;
 }