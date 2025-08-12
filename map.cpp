//To play with maps...watch lec 27 for that.
// Refer to pg.53 back.
#include <iostream>
#include <map>
using namespace std;

int main () {
    map <string, int> m; // NOTE : This too returns data in a sorted m anner on the basis of keys.
    m["mapple"] = 1;
    m["ball"] = 2;
    m.insert({"cat", 3});
    m.emplace("dog", 4);
    
    // To use the function erase.
    m.erase("ball");

    cout << "The elements in the container m are : " << endl; 
        // every entry in a map is a pair.

    for (auto p : m) {   // or for (pair <string, int> p : m)
        cout << p.first << "," << p.second << endl;
    }

    // Use of count function.
    cout << "The no. of times the key 'mapple' appears is : " << m.count("mapple") << endl; 
    // count tells the no. of times a key appears in the container.

    // To print the value stored in a key :
    cout << "The value stored in the key, 'cat' is : "; 
    cout << m["cat"] << endl;

    //Use of find function.Look at how to use it.
    if (m.find ("mapple") != m.end()) {
        cout << "The key named 'mapple' was found" << endl;
    } else {
        cout << "The key named 'mapple' was not found" << endl;
    }
    return 0;
}
