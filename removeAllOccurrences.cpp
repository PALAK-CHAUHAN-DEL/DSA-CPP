// To remove all occurrences of a substring. Problem 1910 on leetcode.
// just watch lec 30 of dsa series.
#include <iostream>
#include <algorithm>
using namespace std;

string removeOccurrences(string s, string part) {
    while (s.find(part) < s.length() && s.find(part) < s.length()) {
          s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s, part;
    cout << "Enter the string: ";
    getline(cin, s);
    cout << "Enter the substring to remove: ";
    getline(cin, part);

    string result = removeOccurrences(s, part);
    cout << "Result: " << result << endl;
    return 0;
}