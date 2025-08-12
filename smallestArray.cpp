// find the samllest value in the given array!
#include <iostream>
using namespace std;

int main () {
    int marks [6] = {10, 20, 30, 40, 50, 60};
    int smallest = INT_MAX;
    int largest = INT_MIN; // we have initialised it to infinity as ever no will be smaller 
    int size = 6;              //than that ... for comparision 
    for (int i = 0; i < size; i++) {

        /* instead of using the complete if loop here, we could have used the built in min func like:
        smallest = min (marks[i], smallest); NOTE : for loop runs for every value of i*/
        // lets try that for finding the largest value in this code itself
        if ( marks[i] < smallest) {
            smallest = marks[i];  // i here is the index no..like how array starts from 0..that is it..
        } 
            largest =  max (marks[i] , largest);
    }       cout << smallest << endl;
            cout << largest << endl;
        
}       
// INT_MAX represents infinity
/* You could use i < 6 directly in the for loop instead of i < size. However, using a variable like size
makes your code easier to maintain and more flexible. If you ever change the array size, you only need 
to update the size variable, not every loop, in case of multiple loops. But both i < 6 and i < size will
work the same for this specific array.*/