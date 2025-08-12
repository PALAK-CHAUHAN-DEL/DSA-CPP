// To understnad the concept of list.Watch lec 27 for explanation.
#include <iostream>
#include <list>
using namespace std;

int main () {
    list <int> l;     // A 0 size list.
    l.push_back(1);   // Try to guess the output.
    l.push_back(2);   // u can also try other functiond like emplace back and emplace fron in here.
    l.push_front(3);
    l.push_front(5);
    for (int x : l) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}