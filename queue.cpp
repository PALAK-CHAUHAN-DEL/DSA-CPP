// To understand the working of functions on a queue. pg 51 back of notebook.
#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main (){
    deque <int> dq = {1, 2, 3, 4, 5};
    queue <int> q(dq);
    while (!q.empty()) { // here the () after the empty function are called function call operator.
        cout << q.front() << " "; // we gt them in the order they were inserted.
        q.pop(); // elements are popped from front.
    }
    return 0;
} 
//q.front() gives you the oldest element—the one at the very front of the line that was added first.

/*If you want to see the last element added to a queue (the newest one at the back of the line),
 you use the q.back() function.*/