// An even optimised approach using the common Dutch National Flag Algorithm.
// flag in coading means a variable that we initialise to dthg and then use it as needed.
// watch lec 25 for explanation. I couldn't understand even 1% of it.
#include <iostream>
#include <vector>
using namespace std;

void sort (vector <int> &vec, int n) {
    n = vec.size (); // don't make a mistake of redeclaring n here by writing int n.
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (vec[mid] == 0) {
            swap (vec[low], vec[mid]);
            mid++, low++ ;
        } else if (vec[mid] == 1) {
            mid ++;
        } else { // 2
            swap (vec[high], vec[mid]);
            high--;
        }
    }
}

void printArray (vector <int> vec, int n) {
    for (int i = 0; i < n; i++) {
        cout << vec[i] << " "; 
    } 
    cout << endl;
}
int main () {
    vector <int> vec = {2,0,2,1,1,0};
    int n = vec.size();
    sort(vec, n);
    printArray(vec, n);
    return 0;
}
/* just watch the lec i say. */