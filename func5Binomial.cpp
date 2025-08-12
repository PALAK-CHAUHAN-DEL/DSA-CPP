// define a functioni to calculate nCr, binomial coeff. for n and r
#include <iostream>
using namespace std;
int binomialCoeff (int n, int r) {
        int binomialCoeff = 1;
        int nfact = 1;
        int rfact = 1;
        int nrfact = 1;
    for ( int i = 1; i <= n; i++) {
          nfact *= i;
        } 
    for ( int i = 1; i <= r; i++) {
          rfact *= i;
        }
    for ( int i = 1; i <= (n-r); i++) {
          nrfact *= i;
        }
        
    binomialCoeff = nfact / (rfact * nrfact);
    return binomialCoeff;}
int main () {
    int n,r; 
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "The binomial coeff of the given no. is : " << binomialCoeff(8,2)<<endl;
    return 0; 
}    


