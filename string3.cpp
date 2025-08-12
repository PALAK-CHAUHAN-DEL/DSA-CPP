// To reverse a string. lec 29 of dsa series.
/// look at the diffrence btw how difficult it is to reverse a string in comparision to the strings, so is why they are better.
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    string str1 = "hello world";

    // reversing using the built in reverse function.
    reverse (str1.begin(), str1.end());
    cout << str1 << endl;

    // reversing using the for loop.
    string str2 = "hello palak";
    for (int i = str2.length() - 1; i >= 0; i--) { 
        cout << str1[i] << " ";
    } // could have also written int i = str2.size().
    cout << endl;

    // reversing only a part of the string, using the two pointer appraoch.
    // here we are basically using the function of substr (substring).
    int start = 6, end = str2.size() - 1;
    string part = str2.substr(6, 10);
    reverse (part.begin(), part.end());
    cout << "The reversed part is : " << part << endl;
    return 0;
}