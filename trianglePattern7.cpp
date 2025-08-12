/* A 
   B A
   C B A
   D C B A */ // TO PRINT THIS PATTERN
   // finally written it myself after an hour
   // *IMP PROBLEM*
   #include <iostream>
   using namespace std;
   int main () {                        // the pttern that was being printed when 
      int n = 4;                        //i didn't write char in cout were the ASCII    
      char ch = 'A';                    //values of the alphabet
      for (int i=1; i<=4; i++) {
          ch = ch + 1;
          for ( int j = 1; j<=i; j++) {
            cout << char (ch - j) << " ";
            }
        cout << endl;
    }               // ch++ is written inside the 1st loop so its vslue increases
                 // only once for each row only once the outer code runs...
                 // instead of ch - j....we could have used an other variable in olace of j
                 // but had to define it outside the loop...
     return 0; 
}
    
   