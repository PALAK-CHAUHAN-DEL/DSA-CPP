// // Same as set, with just a difference that it doesn't return elements in a sorted manner.
#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    unordered_set <int> us;
    us.insert (1);
    us.insert (3);
    us.emplace (2);
    
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;
    cout << "The size of the unordered sest is : " << us.size() << endl;

    // Use of find function
    if (us.find(2) != us.end()) {
        cout << "2 is present in the given unsorted set" << endl;
    } else {
        cout << "2 not found in the unsorted set" << endl;
    }
    return 0;
}
// NOTE ~ The functions like lower and upper bound aren't available for unordered sets. 
// They basically work on sorted containers.

// IMP NOTE : With unordered sets, we can expect the elements in any order  whaen we iterate over them.

