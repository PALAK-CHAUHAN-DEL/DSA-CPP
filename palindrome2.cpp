// to check if a given alpha numeric string in either lower or upper case is a valid palindrome or not.
// using the normal and easy 2 pointer approach.
#include <iostream>
using namespace std;

bool validPalindrome (string s) {
     int n = s.size();
     int start = 0, end = n-1;
     while (start < end) { // we did not write if(start <= end), cuz when they are =, they anyways point to the same element as will not return a false value.
           if (s[start] != s[end]) { // if not, then just ask gpt.
              return false;
           }
           start++; end--;
    } 
           return true;
}

int main () {
    string s;
    cout << "Enter the string :" << endl;
    cin >> s;
    if (validPalindrome(s)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is not a valid palindrome." << endl;
    }
    return 0;
}


