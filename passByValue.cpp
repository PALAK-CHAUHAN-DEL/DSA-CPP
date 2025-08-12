// to understand the concept of pass by value.
#include <iostream>
using namespace std;

void Reference (int &a) { // the & here asks to make changes to the variable in the main function.
    a = 20;               // this function in a is an example of pass by reference as the changes reflect in the main function.
}              // this is an example of pass by reference using  alias (other name for the same thing [&] )/references (&)...in this case.

void Reference2 (int b) { // missing &...means don't change the value of the variable in main function.
    b = 20;               // this function in b is an example of pass by value.
}
int main () {
    int c = 10;
    int b = 10;
    Reference (c); // using alias for a .... watch lec 15 of dsa series..
    cout << c << endl;

    Reference2 (b);
    cout << b << endl;
    return 0;
}