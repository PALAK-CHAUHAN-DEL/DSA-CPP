/*     *
       * *
       * * *
       * * * *    */ // print this star pattern
       #include <iostream>
       using namespace std;
         int main () {
            int n =4;
            char ch= '*';
            for ( int i=1; i<=n; i++) {
                cout << endl;
                for ( int j=1; j<=i; j++) {
                    cout << ch << " ";
                }
            }
            return 0;
         } // for logic check pg 5B