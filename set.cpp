// To understand the concept of sets. lec 27 of dsa series and pg 56 back.
#include <iostream>
#include <set> 
using namespace std;

int main () {  // it cannot be initaialised with an underlying container
    set <int> s; // []cannot be used to access or insert values in a set.
    s.insert (1);
    s.emplace (2);
    s.insert (3);
    s.emplace (5);
    s.insert (4);
    s.emplace (3); // The same value entered is ignored and the size
                   // of the set too remains same and unaffected by this same value inserted.

    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;

    // use of size function.
    cout << "Size of the set is : " << s.size() << endl; // no change in size due to duplicate values.

    // use of lower and upper bound.
    cout << "Lower bound of the set is : " << *(s.lower_bound(3)) << endl; // we need to use the dereference operator to get the value of the element as 
    cout << "Upper bound of the set is : " << *(s.upper_bound(3)) << endl; // this functions returns the iterator.
    
    return 0;
}