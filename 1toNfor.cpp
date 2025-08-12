// program to print numbers from 1 to n where n is given by the user
# include <iostream>
using namespace std;
int main () {
    int a;
    cout << "Enter the number: ";
    cin >> a;
    for (int i = 1; i<=a; i++) {
        cout << i << ","; /*Whatever we write here in the double quotation marks
        will work as a separator in the output.*/
    }         
} // Written myself!