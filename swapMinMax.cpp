// write a function to swap the min and max number of an array
// tho written most of it myself, still made many mistakes
#include <iostream>
using namespace std;

void swapMinMax (int arr[], int sz) {
    int mini = INT_MAX;
    int maxi = INT_MIN;
    int miniIndex = -1;
    int maxiIndex = -1;
    for (int i = 0; i < sz; i++) {
         if ( arr [i] < mini) {
            mini = arr[i];
            miniIndex = i;
        }
         if (arr[i] > maxi) {
            maxi = arr[i]; // needed cuz just swapping the indices will not work
                           //we even need to assign them these new values....
            maxiIndex = i;
         }
    }
         swap(arr[miniIndex], arr[maxiIndex]);
}
 
int main () {
    int arr[] = {1,2,3,4,5,6};
    int sz = 6;
    swapMinMax (arr, sz);
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

/*Assigning the value of minIndex and maxIndex to -1 at the start is a common practice to indicate that these indices have not been found yet.
 It acts as a "sentinel" value:

If the array is empty or if, for some reason, no minimum or maximum is found, the index will remain -1, which is not a valid array index.
This helps you check later in the code (for example, before swapping) whether a valid index was actually found.
In a normal, non-empty array, the indices will be updated during the loop, and -1 will never be used. It's just a safe initial value to 
avoid using an uninitialized variable.*/

/*if i didn't write mini = arr[i] and maxi = [i]:
When I say "you are only swapping the numbers in the variable and not the array," I mean:

If you write swap(miniIndex, maxiIndex);, you are swapping the values stored in the variables miniIndex and maxiIndex (which are just numbers representing positions in the array).
This does not change the actual values inside the array itself.
To actually swap the smallest and largest values in the array, you must swap the elements at those positions:

This swaps the values at the indices miniIndex and maxiIndex in the array, so the array itself is updated as expected.*/
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*You have to assign the value of the largest and smallest number in your array to their respective variables (like mini = arr[i]; and maxi = arr[i];) because you need to keep
 track of the actual values at those positions as you search through the array.

If you only store the indices (positions) without updating the values, you won’t know which value is currently the smallest or largest when you compare the next element. 
By updating both the value and the index each time you find a new minimum or maximum, your comparisons in the next loop iteration are always correct.

In summary:
Assigning the value ensures your comparison is always with the current smallest/largest value, so you find the true minimum and maximum in the array.
This is why you must update both the value and the index as you loop through the array.*/