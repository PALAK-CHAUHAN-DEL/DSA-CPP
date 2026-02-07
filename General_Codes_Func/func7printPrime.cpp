// Write a function to print all prime numbers from 2 to n

#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0)
            return false; /* as soon as any return state..is executed the complete
            function is terminated...the next return is also not executed...
            we immediately enter the next func..*/
    }
    return true;
}

// Function to print all prime numbers from 2 to n...imp part 
void printPrimes(int n) {
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Prime numbers from 2 to " << n << " are: ";
    printPrimes(n);
    return 0;
}