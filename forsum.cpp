// A for loop program to print the sum of numbers from 1 to n
# include <iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter the number ";
    cin >> n;
    int sum = 0;
    for( int i =1; i<=n; i++) {
        sum += i;} /* if we wrte this cout inside the for block then 
                   the desired output will not come*/
        cout <<"Sum =" << sum; // i didnt write the above line myself!
    return 0;
}
