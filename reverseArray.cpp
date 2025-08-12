/* To reverse an array using a two pointer approach.
 One of the most imp cpncept...will be using the built in swap functio here.
 Here start and end are called the two pointers where we start++ and end--.
 In case of an arry with odd numbers, the condition is: start = end; and in case of 
 an even arrray, the condition is : start > end!
 So, if we were to coombine both the conditions then it becomes : start < end...thihs holds true cuz 
 in evn no of arrays we anyways dont have to swap the center value.*/

 // i am having to memorise this code...not able to understand.
 
#include <iostream>
using namespace std;

void reverse ( int arr[], int sz) {
    int start = 0 , end = sz-1;
    while (start < end) {
    swap (arr[start] , arr[end]);
    start ++;
    end--;
   }
}

int main () {
    int arr[] = {1,2,3,4,5,6};
    int sz = 6;
    reverse (arr,sz);
    for (int i =0; i < sz; i++) {
        cout << arr[i] << " "; /*The variable i is the loop index so arr[i] gives you the value at
                                 position i in the array. This allows you to display all the elements 
                                 of the array in their new, reversed order.*/
    }
    return 0;
}
/*The reason for using void instead of int in the function definition void reverse(int arr[], int sz)
 is because this function does not return any value. It simply modifies the array in place (by reference),
  so there is no need to return anything. Using void clearly indicates that the function performs an action
   (reversing the array) but does not produce a result to be used elsewhere in the code.*/


/*The execution of your program always starts from the main() function. Here’s how it proceeds step by step:

The program enters main().

The array arr and its size sz are defined.

The function reverse(arr, sz); is called, which reverses the array in place.

After returning from reverse, the program enters the for loop:
for (int i = 0; i < sz; i++)

The loop starts with i = 0 and prints arr[0], then increments i to 1, prints arr[1], and so on.

This continues until i reaches sz (6), at which point the loop stops.

After the loop, cout << endl; prints a newline, and the program ends.
Summary:

Execution starts at main().
The loop runs from i = 0 to i = sz - 1, printing each element of the (now reversed) array in order.
The value of i increases by 1 each time, so each array element is printed one after the other.  */ 