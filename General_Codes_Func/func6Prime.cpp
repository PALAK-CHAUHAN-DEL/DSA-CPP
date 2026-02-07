// Define a function to check if a number is prime or not
// try to write it yourself
// check bool.cpp before starting
// its an imp code .... try to understand it properly
#include <iostream>
using namespace std;

bool Prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            return false; /* the default programming in your mind that says that
        only the 1st value of this will be executed wrong...only when the 
        condition is satisfied the program will go to the return statement... */
        }
    }
    return true;  /* this return statement is executed at last when none of the 
    above condition holds true*/
}

int main() {
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    if (Prime(n)) 
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}  
   /* in c++ the if condition in line 23 means that if the condition gives a true 
   value then only the if block will be executed...if not the else block!!*/