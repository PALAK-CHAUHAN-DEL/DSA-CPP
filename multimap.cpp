// To understand the concept of multi maps. And the possible use of functions on them.
#include <iostream>
#include <map>
using namespace std;

int main () {
    
    multimap <string, int> mm;
    mm.insert({"B", 1}); /* Even tho the keys are not initialised in a sorted array,
                            the output is in a sorted manner!*/
    mm.insert({"A", 2});
    mm.emplace("D", 3);
    mm.emplace("C", 4);

    for (auto p : mm) {  //Thefor each loop used to print the key value pairs in maps etc.
        cout << p.first << "," << p.second << endl;
    }       // NOTE: It returns data in an ordered manner on the basis of keys. 
    return 0;
} 

