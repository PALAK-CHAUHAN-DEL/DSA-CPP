// waf to print the index of the smallest and largest values of the array
// made many mistakes in the code...try to do it yourself

#include <iostream>
using namespace std;
int main() {
    int marks[] = { 15, 85, 98, 51, 55, 76} ;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex;
    int largestIndex;
    int size = 6;
    for (int i = 0; i < size; i++) {
        if ( marks[i] < smallest) {
            smallest = marks[i]; 
            smallestIndex = i;
        }
            
        if (marks[i] > largest) {
            largest = marks[i];
            largestIndex = i;
        }
    }     
 cout << "The index of smallest number is: " << smallestIndex << endl;
 cout << "The index of largest number is : " << largestIndex << endl;
 return 0;
}

        