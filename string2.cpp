// To distinguish btw different input methods of char arrays and strings.Pg 60 back of notebook.
#include <iostream>
#include <limits> // to be able to use cin.ignore().
using namespace std;

int main () {
    string str1;
    cout << "Enter the value of str1 : "; 
    cin >> str1; // This will input only till it encounters 1st space.
    // look at how it inputs only till the 1st space.
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "The str1 u entered is : " << str1 << endl;

    // command to input complete sentence.
    string str2;
    cout << "Enter the value of str2 : ";
    getline (cin, str2); // It is upto us, as to if we want to enter a delimiter too or not.
    cout << "The str2 u entered is : " << str2 << endl;

    // using a for loop to print each character of the string.
    string str3 = "I am me!"; // creating a new string for this.
    cout << "Accessing individual elements : ";
    for (int i = 0; i < str3.length(); i++) {
        cout << str3[i] << " ";
    }
    cout << endl;

    // using a for each loop to access individual elements.
    cout << "Accessing individual elements using for each loop : ";
    for (auto x : str3) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}