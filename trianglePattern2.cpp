/*  1            // i = 1
    2 2          // i = 2
    3 3 3        // i = 3
    4 4 4 4 */   // i = 4
    /* observe that in every line we have to print the value of i repeatedly...so
    is why in the inner for loop we are printing the value of i */
    #include <iostream>
    using namespace std;
    int main () {
        int n=4;
        for (int i=1; i<=n; i++) {
            cout << endl;
            for ( int j=1; j<= i; j++) {
                cout << i << " ";
            }
        }
        return 0;
    } // written myself after learning the logic of the trianglePattern1.cpp!!
      // who says that i cant do anything?