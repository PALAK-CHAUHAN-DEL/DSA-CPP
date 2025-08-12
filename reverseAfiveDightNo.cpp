// Waf to reverse a 5 digit int input by the user...It's just that i have written it myself.
#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n) {
    int reversed = 0;
    int place = 0;
    int i = 4;
    int digit = 0;
  while (n != 0) {
    digit = n % 10;
    place = pow (10, i) * digit;
    reversed += place;
    n = n/10;
    i--;
  }
  return reversed;
}
int main () {
    int n;
    cout << "Enter a 5 digit number to be reversed : ";
    cin >> n;
    int ans = reverse(n);
    cout << "The reversed no is : " << ans;
    return 0;
}