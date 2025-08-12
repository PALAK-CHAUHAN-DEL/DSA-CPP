// To print the given pattern...
/* A B C D
   A B C D
   A B C D
   A B C D*/
   #include <iostream>
   using namespace std;
   int main () {
    int n = 4;
    for ( int i=0; i<=n-1; i++) { // go from 0-(n-1) or from 1-n ..all the same
        cout << endl;
        char ch = 'A';
        for ( int j=0; j<=n-1; j++) {
            cout << ch << " "; //1st print hten increment!
            
            ch = ch + 1; // if this line comes before the cout statement, it will print B C D E
            
        }
    }

}
