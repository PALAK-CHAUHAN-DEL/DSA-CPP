/*  1 
    2 1
    3 2 1
    4 3 2 1  */ // to print this pattern....****IMP PROBLEM****
    // this is a concept of backward loops...
    // i.e. we have to print the value of j in reverse order...
    //try writing it yourself...
    #include <iostream>
    using namespace std;
    int main () {
        int n = 4;
        for ( int i = 1; i <= n; i++ ) {
            cout << endl;
            for ( int j = i; j >= 1; j-- ) {
                cout << j << " ";
            }
        }
        return 0;
    } // couldnt catch the logic of this pattern...so couldn;t write it myself...