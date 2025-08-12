// define a function to print min of two given numbers...
#include <iostream>
using namespace std;
// as this is a non void function, and it is expected that it will return an 
// int value, but cout in line 9 and 11 will show error as we aare just printing
//a value and not returning any value that can be sent back to the main function
int min (int a, int b) {
    if( a> b) {
        return b; // no << sign to return like cout
    } else {
         return a;}
    }
int main() {
    cout << "min : " << min (6,7)<< endl;
    return 0;
}    
   