//same as reverseArray.cpp
/* To reverse an array using a two pointer approach.
 One of the most imp cpncept...will be using the built in swap functio here.
 Here start and end are called the two pointers where we start++ and end--.
 In case of an arry with odd numbers, the condition is: start = end; and in case of 
 an even arrray, the condition is : start > end!
 So, if we were to coombine both the conditions then it becomes : start < end...thihs holds true cuz 
 in evn no of arrays we anyways dont have to swap the center value.*/
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
    cout << endl;
    return 0;
}