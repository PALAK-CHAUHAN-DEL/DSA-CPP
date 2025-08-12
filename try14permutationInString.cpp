// problem 567 on leetcode. Watch lec 31 for explanation.
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
    int freq[26] = {0};

    for (int i = 0; i < s1.size(); i++) {
        freq[s1[i] - 'a']++;
    }

    int windSize = s1.length();

    for (int i = 0; i < s2.size(); i++) {
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
