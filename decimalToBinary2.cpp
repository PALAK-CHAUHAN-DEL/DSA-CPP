// a code to print binary of a decimal number using while loop!
/* for logic watch lec 6, binary number system of dsa seroes by shraddha.
~try to write it yourself! */
#include <iostream>
using namespace std;
int binary ( int n) {
    int power = 1;
    int ans = 0; // binary number...the final ans.
    while (n>0) {
        int remainder = n % 2; /* by writing int before remainder we are using and 
        difining the remainder variable at the same time. Other variables are 
        defined outside the loop as their value must increase eaach time the loop rund
        and not reset every time the loop runs!*/
        n  /= 2;
        ans += ( power* remainder);
        power *= 10; 
    } return ans;
}

int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n; /* if we want to print all binary no from 1 to n, then just add this 
    for loop line after cin...for (int i = 1; i<=n; i++ ).*/
    cout << "The binary number of the given decimal number is : " << binary (n) << endl;
    return 0;
}