/* A 
   B C
   D E F
   G H I J */ // TO PRINT THIS PATTERN
   #include <iostream>
   using namespace std;
   int main () {
         int n = 4;
         char ch = 'A';
         for( int i = 1; i <= n; i++) {
            for( int j = 1; j<= i ; j++) {
                cout << ch << " ";
                 ch++;
            }
            cout << endl;
         } return 0;
    } // written it myself...it was easy...