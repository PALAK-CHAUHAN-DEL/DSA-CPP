// Watch lec 29 of dsa series. pg.60 back
#include <iostream>
using namespace std;

int main () {
    string str1 = "Palak"; // we don't need to include [] or mention the size of the string here unlike char arrays.
    // but this is only when we have to just create a string with one value.
    cout << "The string is : " << str1 << endl;

    // concatenation of two strings
    string str4 = " Chauhan";
    string str3 = str1 + str4;
    cout << "Addition of strings give : " << str3 << endl;
    cout << "The length of the string is : " << str3.length() << endl;

    // cpmparing two strings:
    cout << str1 << " == " << str4 << " : " << (str1 == str4) << endl; // 1 for true , 0 for false.

    // lexiographical comparison:
    cout << str1 << " < " << str4 << " : " << (str1 < str4) << endl; // 1 for truw and 0 for false.
    

    // array of strings.
    // we need to specify the size in here if we do not initialise the str2.
    cout << "The array of strings (str2) is : ";
    string str2 [] = {"hello", "world"};
    for (auto x : str2) {
         cout << x << " ";
    }
    cout << endl;
    return 0;
}