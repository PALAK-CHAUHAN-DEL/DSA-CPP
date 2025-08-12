//To understand the concept of functions in priority_queue.Refer to pg. 52, back.

#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main () {
    vector <int> vec = {1, 2, 3, 4, 5};
    priority_queue <int> pq (vec.begin(), vec. end());

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop(); // We have to pop elements as to not make it an infinite loop.
    }             // This is necessary to print elements using this while loop.
    cout << endl;

    // To make it a min heap i.e. to make it a min priority queue where the one with the smallest value is at the top.
    priority_queue <int, vector <int>, greater <int>> pq1 (vec.begin(), vec. end());
    while (!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    return 0;
} 
/* Elements are returned in the reverse order of their insertion in a default created priority_queue 
   as this too is basically a stack with just sorted elements.*/