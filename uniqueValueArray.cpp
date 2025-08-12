// waf to print all unique values in an array
// couldnt write it myself...try to 
#include <iostream>
using namespace std;

void uniqueValue(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        bool isUnique = true; // initialising it to true...
        for (int j = 0; j < sz; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 3, };
    int sz = 7;
    uniqueValue(arr, sz);
    return 0;
}

/*n C++, the && operator means logical AND. It is used to combine two conditions,
 and the result is true only if both conditions are true.

How it works in your code:

i != j checks that you are not comparing the same element with itself.
arr[i] == arr[j] checks if the values at positions i and j are equal.
The whole condition is true only if both i != j and arr[i] == arr[j] are true at the same time.

Summary:

&& combines two (or more) conditions.
The result is true only if all combined conditions are true.
If either condition is false, the whole expression is false.*/


/*The break statement in line 12 is used to immediately exit the inner for loop as soon as 
a duplicate value is found (i.e., when arr[i] == arr[j] and i != j). This makes the code more
 efficient because there's no need to keep checking the rest of the array once you know the value is not unique.

When break is executed, it only exits the current (inner) for loop, not the if block or the outer loop.
The program then continues with the next iteration of the outer loop.*/