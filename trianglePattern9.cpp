/*  1 1 1 1
    2 2 2 
    3 3 
    4  */ // to print this pattern...****IMP PROBLEM****
    #include <iostream>
    using namespace std;
    int main () {
        int n = 4;
        char ch  = ' ';
        for (int i = 1; i <= n; i++) {
            for ( int j = 4; j >= i; j--) {
                cout << i << " ";
             } cout << endl;
        } return 0;
    }
