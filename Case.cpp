// a program to tell when the given inout is in upper or lower case
#include <iostream>
using namespace std;
int main () {
    char c; // Don't forget to write this char c..as u are used to int a...
    cout << "Enter the character: ";
    cin >> c; // No need to write cin>>"%c",&d; cuz this is how it is in c++!
    if ( c>='a' && c<='z') { /* make sure to write a and z here in single quotes..
                              if not they will be undefined variable!*/
        cout << "Lower Case\n";
    }else {
        cout << "Upper Case\n";}
        return 0;
    } // I have mentioned all the mistakes i have done in the code
// And i have also mentioned the correct code in the comments..
