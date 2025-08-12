// to search the given element in an array.
// pls try to write it yourself...
//other way of writing this is by defining a function

#include <iostream>
using namespace std;int main () {
      int arr[] = {1,2,3,4,5,6,7};
      int size = 7;
      int n;
      int index;
      cout << "Enter the value of n : ";
      cin >> n;
        for  (int i = 0; i < size ; i++) {
           if  ( n == arr[i]) {
            index = i;
               cout << index << endl;
               return 0; //this is very imp as without it for ever time the condition dosent hold true -1 will be printed!
           }
        }  
        cout << -1 << endl;
        return 0;
    }