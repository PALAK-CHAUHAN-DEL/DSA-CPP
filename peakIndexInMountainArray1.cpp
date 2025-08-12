// An intuitive approach to solving the problem of peak index maountain array.
// watch lec 19 for explanation.will use linear search or brute force approach for this q here.
/* A peak element is an element that is the maxima of the graph when the array is plotted.
It is q 852 in leetcode.*/
#include <iostream>
#include <vector>
using namespace std;
int Peak (vector <int> vec) {
    int n = vec.size();
    for (int i = 1; i < n - 1; i++) { // as the 1st and last elememts cannot be the peak elemente we are innoring the corner cases.
        int peak = vec[i];            // as it definitely has to be a mountain as mentiond in the q.
        if ( vec[i] > vec[i - 1] && vec[i] > vec[i + 1]) {
            return i;
        }
    }   return -1;
}
int main () {
    vector <int> vec = {1,2,3,4,3,2,1};
    int result = Peak (vec);
    cout << "The peak element's index in the given array is : " << result << endl;
    return 0;
}