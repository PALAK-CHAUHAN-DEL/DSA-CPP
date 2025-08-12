// Watch kec 29 for explanaiton.
#include <iostream>
#include <cstring>
using namespace std;

// here we are trying to store a string in a char array. All what we have done is to use " ".

int main () {
    char str[] = "hello";

// {'h', 'e', 'l', 'l', 'o', '\0'}. this is how it is stored internally.
// To access it this way we write it this way.
    cout << "Accessing individual elements of the char array : ";
    for (char c : str) {
        cout << c << " ";
    }
    cout << endl;

// printing the complete array.
    cout << "The char array is : " << str << endl;

// printing the size of the array.
    cout << "The size of the array is : " << strlen (str) << endl; // printing the length of the string..{5}.

// Printing the length of the string using the for loop instead of strlen().
   int length = 0; // initialising the length variable to 0;
   for (int i = 0; str[i] != '\0'; i++) { // as the null char (\0) is the last char by default.
       length++;
   }
   cout << "The length of the string is : " << length << endl;
   
// accessing individual elements using it's index.
    cout << "The value at index 3 is : " << str[3] << endl; 
    return 0;
}