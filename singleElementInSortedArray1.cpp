// watch lec 20 for explanation...this is problem 540 on leetcode.
// will solve this one with linear search. Here there is only one element that dosen't have a copy.
# include <iostream>
# include <vector>
using namespace std;

int singleElement (vector <int> vec) {
    int n = vec.size();
    if (n == 1) return vec[0]; // if there is only one element in the array.
    if (vec[0] != vec[1]) return vec[0];
    if (vec[n-1] != vec[n-2]) return vec[n-1];
    for (int i = 1; i < n-1; i++) {
        if (vec[i] != vec[i-1] && vec[i] != vec[i+1]) {
            return vec[i];
        }
    } return -1; // tho this is not needed as there is surely an element with no repetition.
}

int main () {
    vector <int> vec = {1,1,2,2,3,3,4,4,5,6,6};
    int result = singleElement (vec);
    cout <<  "The only single element in the array is : " << result << endl;
    return 0;
}

