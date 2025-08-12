// Rock, paper, scissors game. Let's practice it writing it daily!!
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    string choices [] = {"rock", "paper", "scissors"};
    int playerChoice;

    cout << "Welcome to rock, paper, scissors game!" << endl;
    cout << "Rock(0), Paper(1), Scissors(2) - Enter your choice : ";
    cin >> playerChoice;
    
    if (playerChoice < 0 || playerChoice >2) {
        cout << "Invalid choice.";
        return 0;
    }

    srand(time(0));
    int computerChoice = rand() % 3;

    cout << "Your choice is: " << choices[playerChoice] << endl;
    cout << "Computer choice is : " << choices[computerChoice] << endl;

    if (playerChoice == computerChoice) {
        cout << "It's a draw!";
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
                cout << "You win!" << endl;

    } else {
      cout << "You loose!" << endl;
      cout << "Not the end, but the beginning of your win!" << endl;
    }
    return 0;
}
/*While rand() % 3 does generate a number between 0 and 2, without srand(time(0)),
 the sequence of numbers produced by rand() will be the same every time you run your program.
This means the computer's choices will follow a predictable, repeating pattern, not true randomness.

~ srand(time(0)) sets a different starting point (seed) for the random number generator each time you run the program,
based on the current time. This ensures that rand() produces a different sequence of numbers on each run,
making the computer's choices truly random and unpredictable for every game.*/