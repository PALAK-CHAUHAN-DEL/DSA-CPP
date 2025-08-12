// watch lec 24 for explanation, this is used to add a new element in the right position in a set of sorted random sorted elememts.
// All what u can do is to just try to understand the code by dry run, i am not able to as of now.
// by just changing the sign of >&< it can be converted to descending order.

/*Yes, that's correct!
Despite the name "insertion sort", the algorithm is used to sort an entire array. The name comes from the way it works:
 it repeatedly "inserts" each element into its correct position in the already sorted part of the array.*/

#include <iostream>
#include <vector> 
#include <algorithm>
using namespace std;

void insertionSort (int arr[], int n) {
    for (int i = 1; i < n; i++) { // started i with 1 as we consider i=0 as already sorted initially.
         int current = arr[i]; // element
         int previous = i - 1; // index
         while (previous >= 0 && arr[previous] > current) {
             arr[previous + 1] = arr[previous]; 
             previous--; // if previous was 0 according to line 17, then it will make it -1 now and then it will become 0 in line 22...
         }
         arr[previous + 1] = current; // placing the current element in it's correct position.
    }
}

void printArray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
         cout << arr[i] << " ";
    } cout << endl;
}

int main () {
    int arr[] = {4, 1, 5, 2, 3};
    int  n = sizeof(arr)/sizeof(arr[0]);
    insertionSort (arr, n);
    printArray (arr, n);
    return 0;
}

/*What happens when this line runs?
Suppose you have this array during sorting:
[1, 4, 5, 2, 3]
You want to insert 2 at the correct position.

~ current = 2, previous = 2 (arr[2] = 5)
~ Since arr[2] > 2,
arr[3] = arr[2] → array becomes [1, 4, 5, 5, 3]
~ Decrement previous to 1 (arr[1] = 4)
~ Since arr[1] > 2,
arr[2] = arr[1] → array becomes [1, 4, 4, 5, 3]
~ Decrement previous to 0 (arr[0] = 1)
~ Since arr[0] < 2, stop shifting.

Now, you insert current at arr[previous + 1] (which is arr[1]):
arr[1] = 2 → array becomes [1, 2, 4, 5, 3]

*/
// this is how the code dry runs for a random i, now i have understood a bit of it.

