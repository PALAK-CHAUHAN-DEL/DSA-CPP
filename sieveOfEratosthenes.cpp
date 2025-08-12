// Just watch lec 34 for explanation. This is to find the no of prime no. in a given range of no.
// this is othe best approach of all the apprpaches we have triied till date. Problem 204 on leetcode.
// Watch the lec and try to dry run it and u will understand it to some extent.

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n) {
    vector <bool> isPrime (n+1, true); // Create a boolean vector initialized to true with n+1 elements to include 0 also.
    int count = 0;
    for (int i = 2; i < n; i++) { 
        if (isPrime[i]) {
            count++;

            for (int j = 2 * i; j < n; j += i) { // This is how it is...just accept.
                isPrime[j] = false; // basically eleminating all the multiples of i.
            }
        }
    }
    return count;
}

int main() {
    int n = 10;
    cout << "Number of primes less than " << n << ": " << countPrimes(n) << endl;
    return 0;
}


