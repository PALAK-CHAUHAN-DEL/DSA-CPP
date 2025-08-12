// write a code to print binary of a decimal number using loop!
// written it myself finally..with a few errors...tho not a big deal...but was surely needed for a boost! 
#include <iostream>
using namespace std;
int binary (int n) {
    int power = 1;
    int ans = 0;
    while (n > 0) {   // errorhere was that I was using n >= 0 instead of n > 0
        int lastDigit = n % 10;
        n /= 10;
        ans += lastDigit*power;
        power *= 2; 
    }   return ans; // error : return was written inside the loop instead of outside it!
}// which was giviing ans after every iteration of the loop instead of giving the final ans!

int main () {
    int n ;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The decimal no. for the given binary no. is : " << binary (n) << endl;
return 0;
}