/* 1
   1 2
   1 2 3
   1 2 3 4 */ 
   // once u try to write it u know how difficult it is!
   // if not we simply could have printed the value of j in cout !!!hah!!!
   # include <iostream>
   using namespace std;
   int main () {
      int n = 4;
      for (int i=1; i <= n; i++) {
          int x = 1;
          
          for (int j=1; j<=i; j++) {
            cout << x << " "; 
            x = x + 1;
        }
          cout << endl ;
      }
      return 0;
   }