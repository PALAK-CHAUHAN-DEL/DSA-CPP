/*  A
    B B
    C C C
    D D D D
    E E E E E */ // TO PRINT THIS PATTERN
    #include <iostream>
    using namespace std;
    int main () {
        int n = 5;
        for ( int i = 1; i <= n; i++ ) {
            
            char ch = 'A';
            ch = ch + i - 1; //to start output with value of ch...
                            // if not it was starting with B...
            for ( int j = 1; j <= i; j++) {
                cout << ch << " "; /* print the current value and then increase 
                                    the value for the next time the loop runs */
            }
            cout << endl;
        }
        return 0;
    }
    // done it myself...
