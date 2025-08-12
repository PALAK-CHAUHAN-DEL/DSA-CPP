// a nested loop to print star pattern!!****
#include <iostream>
using namespace std;
int main () {
    int n, m;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of m : ";
    cin >> m;
    for (int i = 1; i <= n; i++) {  // no of lines
         cout << endl;
        
        for ( int j =1; j <= m; j++) { // no of stars in a line
            cout << "*";
            
        }           
    }
}