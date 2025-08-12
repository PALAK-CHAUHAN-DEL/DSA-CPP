// write a program to print the sum and product of all the elements of the array....
// have written most of it myself...but still many errors were there!

#include <iostream>
using namespace std;

void sumproduct ( int arr[], int sz) {
    int sum = 0;
    int product = 1; 

    for  (int i = 0; i<sz ; i++) {
         sum += arr[i];
        product *= arr [i];
    } 
       cout << sum << endl;
       cout << product << endl; 
}   

int main () {
    int arr[] = {1,2,3,4,5,6};
    int sz = 6;
    sumproduct(arr,sz);
    return 0;
}