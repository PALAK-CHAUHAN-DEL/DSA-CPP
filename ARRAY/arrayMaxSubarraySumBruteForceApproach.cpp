// write a code to find the max sum of a subarray using the brute force approach.
// check pg 36B and watch dsa series lec 10 for more explaination
// try to understand and off all write it yourself!...Come on kiddo!
#include <iostream>
using namespace std;
int main () {
    int start, end;
    int arr [] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof arr[0];
    int maxSum = INT_MIN; // Initialize maxSum to 0
    // Outer loop: selects the starting index of the subarray
    for (int start = 0; start < n; start ++) {
        int currentSum = 0; // Initialize currentSum to 0 for each starting index
        // Inner loop: selects the ending index of the subarray
        for (int end = start; end < n; end ++) {
            // calculate max sum...i am just done with all of this!!!!!!...only ik what this is!
                 currentSum += arr[end];
                 maxSum = max (currentSum , maxSum );
       }
   }
    cout << "Maximum subarray sum is: " << maxSum << endl;
}