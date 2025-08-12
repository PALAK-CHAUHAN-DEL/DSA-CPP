/*    1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1  */ //to print this which is a combination of 2 triangles...
#include <iostream>
using namespace std;
int main () {
    int n = 4;
    for (int i = 1; i<=n; i++) {
        // spaces 
        for (int j = 4; j>= i; j--) {
            cout << " ";}
            int x = 1;
            // 1st triangle
            for ( int j = 1; j<=i; j++) {
                cout << x;
                x++;}
                 // 2nd triangle
                for ( int j =i-1; j>=1; j--) {
                    cout << j;
                } cout << endl;
        } return 0;
    }        // finally i have written this code myself...just took a little bit
    // of idea of putting j=i-1 from trianglePattern5.cpp for 2nd triangle...
    // the most difficult part was of printing the 2nd triangle...
