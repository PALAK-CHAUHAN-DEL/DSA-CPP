// write a code to find the majority element in the given vector.
// try to write it yourself!

#include <iostream>
#include <vector> // to be able to use vectors
#include <algorithm> // to be able to use sort function
using namespace std;
int majorityElement (vector <int>& vec) {
     int n = vec.size ();
     sort(vec.begin(), vec.end());
     int ans = 0; // initialising the 1st element as the majority element / ans
     int frequency = 1;
     for (int i = 1; i < n; i++) {
            if (vec[i] == vec[i-1]) {
                frequency ++;
            } else {
                ans = vec[i]; // assign the current element as the majority element
                frequency = 1; // reset frequency for the next element
            }
            if (frequency > n/2) {
                return ans;
            }  // if no majority element is found
            
    } 
        return -1; // return -1 if no majority element is found
}

int main () {
    vector <int> vec = {1,2,3,4,6,4,4,4,4,4};
    int result = majorityElement(vec);
    if (result != -1) {
        cout <<"The majority element is  : ";
        cout << result << endl;
    } else {
        cout << "No majority element found" << endl;
    } return 0;
}

/* The sort function in C++ is used to arrange the elements of a container (like a vector or array) in a specified order, usually ascending by default.

How sort works:

The syntax is:

~container.end() returns an iterator pointing just past the last element.

sort rearranges the elements in-place between these two iterators.
Why we write it this way:

sort(vec.begin(), vec.end()); sorts the entire vector vec from the first to the last element.
If you want to sort only a part of the vector, you can specify different iterators (e.g., sort(vec.begin() + 2, vec.end() - 1);).
Example:

This is a standard way to sort containers in C++ using the STL.*/