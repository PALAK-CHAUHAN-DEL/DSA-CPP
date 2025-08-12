// a simple while loop to print the numbers from 1 to n
# include <iostream>
using namespace std;
int main() {
int count = 1; 
int n; 
cout << "Enter the number: ";
cin >> n;
while( count <= n) {
    cout << count << " ";
    count ++;}
}