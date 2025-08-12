// I have understood it pretty well.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string options[3] = {"rock", "paper", "scissors"};
    int playerChoice, computerChoice;

    // Seed the random number generator
    srand(time(0));

    cout << "Welcome to Rock-Paper-Scissors!\n";
    cout << "Enter your choice:\n";
    cout << "0 for Rock\n1 for Paper\n2 for Scissors\n";
    cin >> playerChoice;

    // Generate random choice for computer
    computerChoice = rand() % 3;

    cout << "You chose: " << options[playerChoice] << endl;
    cout << "Computer chose: " << options[computerChoice] << endl;

    // Game logic
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if (
        (playerChoice == 0 && computerChoice == 2) || // Rock beats Scissors
        (playerChoice == 1 && computerChoice == 0) || // Paper beats Rock
        (playerChoice == 2 && computerChoice == 1)    // Scissors beats Paper
    ) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }

    return 0;
}
