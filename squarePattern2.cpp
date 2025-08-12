// differnt code to print the same suare patern of squarePttern.cpp!
// oh god, i never wanted to be the one! 13/5/25...not again..
/* 1234
   1234
   1234
   1234*/ // to print the given pattern
#include <iostream>
using namespace std;
int main() {
    int n=4;
    for (int i =1; i<=n; i++) {
        for (int j =1; j<=n; j++) {
            cout << j <<" "; // to get space between the numbers
        }
        cout << endl; // to print pattern in differnt lines
    }
}
