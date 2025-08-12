// same as stringCompression.cpp// Watch lec 33 of dsa series. This is problem no. 443 on leetcode.
//This code is out of my understanding.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int compress (vector <char> &chars) {
    int n = chars.size();
    int idx = 0;

    for (int i = 0; i < n; i++) {
        char ch = chars[i];
        int count = 0;

        while (i < n && chars[i] == ch) {
            count ++;
            i++;
        }

        if (count == 1) {
            chars[idx++] = ch;
        } else {
            chars [idx++] = ch;
            string str = to_string (count);
            for (char dig : str) {
                chars[idx++] = dig;
            }
        }
        i--;
    }
    chars.resize(idx); // Resize the vector to the new size
    return idx; // Return the new length of the compressed vector
}

int main() {
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);

    cout << "Compressed chars: ";
    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }
    cout << endl;
    cout << "New length: " << newLength << endl;
    return 0;
}