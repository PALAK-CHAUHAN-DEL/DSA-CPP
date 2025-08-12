// Here we will input the char array and then perform operations on that.
// pg 59 back of notebook.
#include <iostream>
#include <cstring>
#include <limits> // for using cin.ignore()
using namespace std;

int main () {
    char str[100];
    cout << "Enter the str : ";
    cin >> str;
    cout << str << endl;
    // ask the reason for this line to gpt.
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // <-- This line will ignore the space given str. Just remove this line and see the difference yourself.

    // creating second char array to see how different input functions work.
    char str2[100];
    cout << "Enter str2 : ";

    // also using a delimiter here.
    cin.getline(str2, 100, '!'); // this will take the whole line as input and store it in str2.
    // Anything after the delimiter will be ignored.
    // If we don't enter ! in the sring we pass the termial will keep asking for values.
    
    cout << str2 << endl;
    return 0;
}