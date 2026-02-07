// a program to tell if a no is prime or not using the boolean variable
// try to write it yourself 
 #include <iostream>
    using namespace std;
    int main() {
        int n;
        cout << "Enter the number : ";
        cin >> n;
        bool isPrime = true; // this is a boolean variable
        // by default we have set bool isprime is true
        for ( int i = 2; i <=(n-1); i++) { /* for logic of this line watch lec 3
            of apna cllg of c++*/
            /*Basically if n is divisible by any no in this range then it is not prime */
            if (n % i == 0) {
                isPrime = false; // this is a boolean variable
                break; // this will break the loop if the condition is true
            }
        }
        if (isPrime) {
            cout << "Prime";
        } else {
            cout << "Not prime";
        }
        return 0;
    }