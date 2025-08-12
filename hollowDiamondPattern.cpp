/*       *
       *   *
     *       * 
   *           *
     *       *
       *   * 
         *         */ // aah! took years to make this pattern!!!
#include <iostream>
using namespace std;
int main () {
    int n = 4;
    for ( int i = 1; i <= n; i++) {
        // spaces and compulsory star...left part of upper triangle
        
        for ( int j = n; j > i; j--) {
            cout << " "; }
            cout << '*'; // this is outside the for block as it is to be printed no matter what,
                         // whether the condition holds true or not!
            // spaces nd compulsory star...right part of upper triangle
        for ( int j = 1; j <= 2*(i)-3; j++ ) {
            cout << " ";}     // for logic of 2*i-1 check notes...or watch lec 4 of c++ and dsa...
              if (i!=1) {
            cout << '*';}

            cout << endl;
    }
            
    for (int i = 1; i<= (n-1); i++) {
        // left part of bottom triangle...
        for ( int j = 1; j <= i; j++) {
            cout << " ";}
            cout << '*';
        // right part of bottom triangle..
        for (int j = 1; j <= 2*(n-i)-3; j++) {
            cout << " ";}    // watch lec for 2*(n-i)-3
             if (i!=3) {
            cout << '*';}

            cout << endl;
    }    
        return 0;
}

