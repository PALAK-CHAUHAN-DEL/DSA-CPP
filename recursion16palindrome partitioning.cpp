// Same as problem 131 on leetcode, watch lec 50 for explanation. Just watch lec i would say, tho i have understood it well, still not dry running it as it will take years.
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool isPali(string s) {
    string s2 = s;
    reverse(s2.begin(), s2.end());
    return s == s2;
}

void getAllParts (string s, vector<vector<string>>& ans, vector<string>& partitions) {
    if (s.size() == 0) {
        ans.push_back(partitions);
        return;
    }
    for (int i = 0; i < s.size(); i++) {
        string part = s.substr (0, i + 1); // i + 1 is the length of the string.
        if (isPali(part)) {
            partitions.push_back(part);
            getAllParts (s.substr (i + 1), ans, partitions);
            partitions.pop_back(); 
        }
    }
}

vector <vector<string>> partition (string s) {
    vector<vector<string>> ans;
    vector<string> partitions;

    getAllParts (s, ans, partitions);
    return ans;
}

int main () {
    string s = "aab";
    vector<vector<string>> result = partition(s);
    for (auto& vec : result) {
        for (auto& str : vec) {
            cout << str << " ";
        }
        cout << endl;
    }
    return 0;
}
