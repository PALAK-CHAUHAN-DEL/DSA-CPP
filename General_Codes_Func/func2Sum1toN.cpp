// define a function to print the sum of numbers from 1 to n..
#include <iostream>
using namespace std;
int sum ( int n ) {
    int sum = 0;
    for(int i = 1; i<=n; i++) {
        sum+=i;}
        return sum;
}

int main () {
    int n;
    cout<<"Enter the value of n : ";
    cin >> n; 
    cout << "sum of numbers is : " << sum(n) << endl; // don't forget to write sum(n)
    // just sum wont work!
    // sum (n) means call the function sum, and pass teh value of n from main() to it.
    return 0;
}