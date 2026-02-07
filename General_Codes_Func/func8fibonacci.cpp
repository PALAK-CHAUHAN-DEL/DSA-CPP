// write  a function to print nth fibonacci
/* it is 0,1,1,2,3,5,8,13,21....i.e...the upcoming term is the sum of 2 preceding terms!*/
//try to write it yourself...
#include <iostream>
using namespace std;

// Function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;

    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the term number (n): ";
    cin >> n;

    cout << "The " << n << "th term of Fibonacci series is: " << fibonacci(n) << endl;
    return 0;
}
/* anothr imp point to make is that in line 10 we have used else if instead of just 
else as else includes everything except the if condition, but we wanted that condition
particularly for n=1 only and at last we have skipped else condiotion as it is not
mandatory to use else everytime we use if condition */

//--------------------------------------------------------------------------

/*The first two numbers are typically defined as:

F(0) = 0
F(1) = 1
The sequence then continues with each number being the sum of the two preceding ones.

When implementing an iterative Fibonacci function, you usually handle the first two cases (n == 0 and n == 1) separately.
The loop starts from 2 because:

- The values for F(0) and F(1) are already known.
- The loop calculates F(2) up to F(n) by summing the previous two numbers.*/