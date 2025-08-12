// To check if if the given string is s valid palindrome or not. Watch lec 30 of dsa series.
// Q.125 on leet code. The difference btw other palindrone prblem and this one is that this one can have a string with special char and can have letters in any case.
// Here we are supposed to consider both upper and lower case as same so we 1st convert the complete string to either upper or lower case using the built in function.
// Also here we are supposed to ignore any special characters, if any ....ex : in "ab!c$c%ba", we must consider the string to be "abccba". So we basically need to write a code to ignore these special char.

#include <iostream>
#include <algorithm>
using namespace std;

bool isAlphanumeric (char ch) { // a function to check if the char is alphanumeric or not.
    if (ch >= 0 && ch <= 9 || ch >= 'a' && ch <= 'z') {
        return true;
    } else {
        return false;
    } // there alresy exist a built in function in c++ to check if a char is alphanumeric or not, tho we have written the complete logic here.
}

bool validPalindrome (string s) {
    int start = 0, end = s.size() - 1;
    while (start < end) {
        if (! isAlphanumeric (s[start])) {
            start ++; continue; // continue here is asing to move to the next iteration, i.e, to the start of the while loop.
        }                       // where as break is used to exit the loop is the condition id not held true.
        if (! isAlphanumeric (s[end])) {
            end --; continue;
        }
        if (tolower(s[start]) != tolower(s[end])) {  // we are using inequality as even if there is one inequality then it is not a palindrome. 
            return false; // tolower is the built in function meant to canvert any upper case to lower if there is any in the 1st place.
        } 
        start ++; // don't forget to incremment the start and the end.
        end --; 
    } 
    return true;
}

int main () {
    string s;
    cout << "Enter the string: " << endl;
    getline (cin, s); // don't forget to use the right input method.
    if (validPalindrome(s)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "It is not a valid palindrome." << endl;
    }
    return 0;
}




