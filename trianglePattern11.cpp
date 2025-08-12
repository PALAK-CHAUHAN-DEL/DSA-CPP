/* A A A A
     B B B
       C C 
         D */ //finally written it myself...
         // go in sequence of codes from 1 to be able to write...
#include <iostream>
using namespace std;
int main () {
    int n = 4;
    char ch = 'A';
    for ( int i = 1; i <= n; i++) {
        ch++;
        for ( int  j = 1; j <= i; j++) {
            cout << " ";}
        for (int j=4; j>=i; j--) {
            cout << char(ch-1);
        }
         cout << endl;
    }  return 0;

}