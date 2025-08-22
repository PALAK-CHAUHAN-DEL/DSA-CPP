// Waf to print all the subsets of a given string....almost same as recursion9permutation.cpp
// Try to write it yourself next time, not as complicated as that of        "     "          .
#include <iostream>
#include <string>
using namespace std;

void printPerms(string &str, int idx) {
    if (idx == str.size()) {
        cout << str << endl;
        return;
    }
    for (int i = idx; i < str.size(); i++) {
        swap(str[idx], str[i]);
        printPerms(str, idx + 1);
        swap(str[idx], str[i]); // backtrack
    }
}

int main() {
    string str = "abc";
    printPerms(str, 0);
    return 0;
}