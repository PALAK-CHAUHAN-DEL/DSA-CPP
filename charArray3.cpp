// To reverse elements of a char array using a two pointers approach.
// problem 344 on leet code.
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    char array[] = {"palak chauhan"}; // there would have been no null char if we used a vec instead of char array
    int n = sizeof(array)/sizeof(array[0]);
    int start = 0, end = n-2; // as the n-1 element is \0 by default
    while (start < end) {
          swap (array[start], array[end]);
          start ++;
          end --;
    }
    cout << array << endl;
    return 0;
}