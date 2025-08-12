// waf to reverse the int n...
/* remember .. not to just print it but to actually reverse it so that when u call 
   the variable in which it is stored, it returns the reversed integer! */
// wasen't able to write it myself!!...thinkn of the logic properly.... 

//same as code reverseInteger.cpp
#include<iostream>
using namespace std;

int reverse (int n) {
    int reversed = 0;
    while (n > 0) {
        int lastdigit = n % 10;
        reversed = reversed * 10 + lastdigit;
        n = n / 10;}
        return reversed;
}    
 
int main () {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The reversed interer is : "<< reverse(n);
    return 0;
}