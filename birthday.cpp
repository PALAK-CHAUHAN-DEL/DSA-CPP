#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

// Function to create a delay
void delay(int milliseconds) {
    this_thread::sleep_for(chrono::milliseconds(milliseconds));
}

// Function to print the birthday cake
void printCake() {
    cout << "         i i i i i i       " << endl;
    cout << "        |:H:a:p:p:y:|      " << endl;
    cout << "      |_______________|    " << endl;
    cout << "     |^^^^^^^^^^^^^^^^^|   " << endl;
    cout << "     |:B:i:r:t:h:d:a:y:|   " << endl;
    cout << "     |      Palak      |   " << endl;
    cout << "     |                 |   " << endl;
    cout << "     ~~~~~~~~~~~~~~~~~~~   " << endl;
}

int main() {
    string message = "🎉🎂 Happy Birthday Palak! 🎂🎉";
    string border(message.length(), '=');

    // Print top border
    cout << border << endl;

    // Print message with delay for effect
    for (char c : message) {
        cout << c;
        delay(50);  // 50 milliseconds delay between characters
    }
    cout << endl;

    // Print bottom border
    cout << border << endl << endl;

    // Print the cake
    printCake();

    cout << endl << "Wishing you a day filled with love, laughter, and cake! 🎈🎁" << endl;

    return 0;
}