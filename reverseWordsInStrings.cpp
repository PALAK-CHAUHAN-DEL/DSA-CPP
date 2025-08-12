// Problem 151  on leetcode, watch lec 32 foe explanation.
#include <iostream>
#include <algorithm>
using namespace std;

string reverseWords (string s) {
    int n  = s.size();
    string ans = "";

    reverse (s.begin(), s.end());

    
    for (int i = 0; i < n; i++)  {
        string word = "";           // as we are using the same iterator i in both while and for loop the next value of i will start from where it has ended in the while loop.
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }
        reverse (word.begin(), word.end());
        if (word.size() > 0) {
            ans += ' ' + word;
        }
    }
     return ans.substr(1); // in the final ans we get a space at the start and to remove it we consider the ans only as the substring with 1st space removed.
}

