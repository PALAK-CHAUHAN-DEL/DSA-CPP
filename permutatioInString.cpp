// problem 567 on leetcode. Watch lec 31 for explanation.
// try to understand this atleast. Just dry run if after watching the lec once more. Or after asking gpt.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isFreqSame (int freq1[], int freq2[]) {
    for (int  i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

bool checkInclusion (string s1, string s2) {
    int freq[26] = {0}; // initialising an array with size 26, all set to 0.

    for (int i = 0; i < s1.size(); i++) {
        freq[s1[i] - 'a']++; // s1[i] here gives us the index whose element is to be incremented.
    } // here freq is an array, and when we write freq[2]++, it means that increase the value of the element at that index by 1.

    int windSize = s1.length();

    for (int i = 0; i < s2.size(); i++) { // the dry run of this part of the code will clear everything...
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while (windIdx < windSize && idx < s2.size()) {
            windFreq[s2[idx] - 'a']++;
            idx++; windIdx++;
        }

        if (isFreqSame (freq, windFreq)) {
            return true;
        }
    }
    return false;
}


int main() {
    string s1, s2;
    cout << "Enter string s1: ";
    getline(cin, s1);
    cout << "Enter string s2: ";
    getline(cin, s2);

    if (checkInclusion(s1, s2)) {
        cout << "Permutation of s1 found in s2." << endl;
    } else {
        cout << "Permutation of s1 not found in s2." << endl;
    }
     return 0;
}
