// to print the given pattern 
/* 1234
   1234
   1234
   1234*/
   #include <iostream>
   using namespace std;
   int main() {
         int n=4, m=1;
    
         for ( int i =1 ; i<= n; i++) { // no of lines fo pattern too be printed
              cout << endl; // to print m in differnt lines
 
            for ( int j = 1; j <= m; j++) {
               cout << "1234"; // pattern to be printed
            } // here we didnt input m or n as the pattern we had print was known
         }
    } // finally written it myself!...its not that i cant do sthg, its just that i need to do it..