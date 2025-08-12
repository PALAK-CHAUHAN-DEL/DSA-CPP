// waf to print intersection of two arrays means the common values of both the arrays.
//this code is damn bad....without the k for loop the common no are printing twicw

#include<iostream>
using namespace std;
void intersection (int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        bool isCommon = false;
          for (int j = 0; j < sz; j++) {
            if (i != j && arr[i] == arr[j]) {
                isCommon = true; // dont write bool once more here and declare the variable once more
                break; // print this value 1st before going forward
            }  
        }  // only  print if this is the first occurance!
           if (isCommon) {
               bool isFirst = true;
                  for (int k = 0; k > i; k++) {
                    if (arr[i] == arr[k]) {
                    isFirst = false;
                break; // this break exists the 2nd for loop and dosen't print arr[i]
                  } // only the 1st for loop runs after that!
           }
         if (isCommon) {
            cout << arr [i] << " ";
        }
    }   
}
}

int main () {
    int arr[] = {1,2,3,1,5,2};
    int sz = 6;
    intersection (arr, sz);
    return 0;
} 
