// solving this q using binary search instead  of linear search.
// watch lec 19 for explanation. The good thing is that after understanding the sudo code from the lec i could code it myself with not many errors...but there were errors.
#include <iostream>
#include <vector>
using namespace std;
int mountainPeak (vector <int> vec) {
    int n = vec.size();
    int start = 0, end = n - 1;
    while (start <= end) { // don't make a mistake of using a for loop here. A while loop is only preferred in case of binary search.
        int mid = start + (end - start) / 2;
        if (vec[mid] > vec[mid - 1] && vec[mid] > vec[mid + 1]) { // mid = peak
            return vec[mid]; // this is the only return value in the code as we have to return the value only when it is the peak.
        }
        if (vec [mid] > vec [mid-1] && vec [mid] < vec [mid + 1]) { // mid = on increasing slope
            start = mid + 1;
        } else { // mid = on decreasing slope.
            end = mid - 1;
        }
    }   return -1;
}
int main () {
    vector <int> vec = {1,2,3,4,5,2,1};
    int result = mountainPeak (vec);
    cout << "The peak of the given array is : " << result << endl;
    return 0;
}
