// To understand working of functions on a stack.
#include <iostream>
#include <stack>
#include <deque> 
using namespace std;

int main () {
    stack <int> s; // We cannot initialise a stack with elements. We  will have to push values one by one into it.
    // push function.
    s.push(1);
    s.push(2); //NOTE ~ We cannot write push_back or emplace_back as the elements are always added to the top only.
    s.push(3); // So we simply write push or emplace simply.
    s.push(4);

    // Use of while loop.
    while (!s.empty()) { // This is how while loop is used on stacks.
        cout << s.top() << " "; // Print the top element.
        s.pop(); // Remove the top element.
    } // Through this loop we get the elements in reverse order of insertion, i.e., LIFO (Last In First Out).
    cout << endl;

    // Use of swap function.
       deque <int> dq = {3, 4, 5, 6};  //We had to add more elements to it as it was made empty by the previous pop function.
       stack <int> s1(dq);            // s1 is a stack initialised with elements from deque dq.

       stack <int> s2; // s2 is an empty stack.
       s2.swap(s1); // All elements of s will move to s2 ans s will become empty.

       // Use of size function.
       cout << "Size of s2 : " << s2.size() << endl;
       cout << "Size of s1 : " << s.size() << endl;
       
    return 0;
}