//To understand the concept of pairs, watch lec 27.
#include <iostream>
#include <vector>
using namespace std;

int main () {
    pair <int, int> p1  = {1, 2};
    cout << "p1 : " << p1.first << " " << p1.second << endl; 

    pair <char, int> p2 = {'P', 5};
    cout << "p2 : " << p2.first << " " << p2.second << endl;

    pair <string, char> p3 = {"Palak", 'k'};
    cout << "p3 : " << p3.first << " " << p3.second << endl;

    pair <int, pair <char, int>> p4 = {1, {'P', 5}}; // pair of pair.
    cout << "p4 : " << p4.first << "," << " " <<  p4.second.first << " and" << " " << p4.second.second << endl;

    vector <pair <int, string>> vecp = {{1, "Apple"}, {2, "Ball"}, {3, "Cat"}}; // vector of pair data type.
    vecp.push_back ({4, "Dog"}); // expects the same data type to be entered as that of the vector.
    vecp.emplace_back (5, "Elephant"); //no need to make kpair and enter the values, it will do the job and then insert.
    for (pair <int, string> k : vecp) { // this will print both first and second element of the pair of each element of vector.
        cout << k.first << " " << k.second << endl;
    }
    return 0;
}
