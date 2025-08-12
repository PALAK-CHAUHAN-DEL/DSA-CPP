/* 1 
   2 3 
   4 5 6
   7 8 9 10 */ // to print Floyd's trisngle...it's this pattern...
   #include <iostream>
   using namespace std;
   int main () {
    int n = 4;
    int x = 1;
    for (int i = 1; i<= n; i++) {
        for (int j = 1; j<= i; j++) {
            cout << x << " ";
            x++;
        } 
        cout << endl;
    } return 0; 

   }// very easy ..just had to declare the variable outside the loop...