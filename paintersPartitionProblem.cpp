// watch lec 22 of dsa series of dsa series.this is similar to bookAllocationLongest.cpp. Try to slove it yourself after the book allocation problem.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isValid (vector <int> vec, int n, int m, int maxTime) {
    int painters = 1;
    int time = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] > maxTime) {
            return false;
        } if (vec[i] + time <= maxTime) {
             time += vec[i];
        } else {
             painters ++;
             time  = vec[i];
        }
    } if ( painters > m) {
        return false;
    } else {
        return true;
    }
} // whenever we return true or false in a function we use a bool function.

int minMaxTime ( vector<int>vec, int n, int m) {
    if (m > n) return -1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
         sum += vec[i];
        }
    int start = *max_element(vec.begin(), vec.end());
    int end = sum;
    int ans = -1;
   
    while (start <= end) {
        int mid = start + (end - start)/2;
        if (isValid (vec,n,m,mid)) {
            ans = mid;
            end = mid-1;
        } else {
            start = mid + 1;
        }
    } return ans;
}

int main () {
    vector <int> vec = {40, 30, 10, 20};
    int n = vec.size();
    int m = 2;
    int result = minMaxTime (vec, n, m);
    cout << "The min max time taken is : " << result << " units" << endl;
    return 0;
}