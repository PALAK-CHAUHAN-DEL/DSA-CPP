// same as a set with just a differenece of multiset allowing insertion of multiple values (it doesn't ignore them like a set.)
 #include <iostream>
 #include <set>
 using namespace std;

 int main () {
    multiset <int> ms;
    ms.insert (1);
    ms.insert (2);
    ms.emplace (3);
    ms.emplace (4);
    ms.insert (3); // Duplicate values will reflect in the output.

    for (auto x : ms) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The size of the multiset is  : " << ms.size() << endl; // duplicate values entered will affect the size.
    cout << "The upper bound is : " << *(ms.upper_bound(2)) << endl; 
    cout << "The lower_bound is : " << *(ms.lower_bound(2)) << endl;
    return 0;
 }

