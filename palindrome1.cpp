// If a given alpha numeric string in either upper or lower case is a valid palindrome or not.
// this is the logic i have thought of myself and written the code with the help of github.
#include <iostream>
#include <algorithm>
using namespace std;

bool validPalindrome (string s) {
     int n = s.size();
     int start = 0, end = n - 1;
     int mid = n/2;

     string firstHalf = s.substr(0, mid);
     string secondHalf = s.substr((n % 2 == 0) ? mid : mid + 1); // skip middle value of it is odd.// the mid here in the second half is the index of the start value. 
     string reversedSecondHalf = string (secondHalf.rbegin(), secondHalf.rend()); // rbegin() and rend() let you easily create a reversed copy of a string.

     /* The above line could also be written as: string reverseSecondHalf = secondHalf;
        reverse (reverseSecondHalf.begin(), reverseSecondHalf.end());  we are 1st assing a new varable by the name of reverse second half.*/

     cout << "First half :  " << firstHalf << endl;
     cout << "Second half : " << secondHalf << endl;
     cout << "Reversed second half : " << reversedSecondHalf << endl;

     if (firstHalf == reversedSecondHalf) {
          return true;
     } else {
          return false;
     }
}

int main () {
     string s;
     cout << "Enter the string to be tested for a palindrome : " << endl;
     cin >> s;
     if  (validPalindrome (s)) { // don't forget to write this (s) here. As we need to call the function with the string as an argument.
          cout << "The string is a valid palindrome." << endl;
     } else {
          cout << "The string is not a valid palindrome." << endl;
     }
     return 0;
}
