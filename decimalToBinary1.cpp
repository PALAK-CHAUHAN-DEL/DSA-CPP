// A code that converts a decimal number to binary using recursion
// this runs by usong a concept that i am not familiar with...
// check code 2...binary2.cpp for correct and understandable ans

#include <iostream>
using namespace std;
void decimalToBinary(int n) {
    if (n > 1) {
    
        decimalToBinary(n / 2);}
    
    cout << n % 2;
}

int main() {
    int decimalNumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    cout << "Binary representation: ";
    decimalToBinary(decimalNumber);
    cout << endl;

    return 0;
} // This code will convert a decimal number to binary using recursion.