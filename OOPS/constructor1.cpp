// watch lec 56 for explanation. Also refer to pg 89 for constructor notes.
#include <iostream>
using namespace std;

class student {
public:

    student () { // i am creating the constructor manually, and it will be implemented the min object is defined in main.
        cout << "Hey there! I am a constructor!" << endl;
    }
    string name;
    int grade;

    void changeGrade (int g) { // Member function
        grade = g;
    }
};

int main () {
    student s1; // Now constructor will  print it's statement
    student s2; // Again constructor will print it's statement
    s1.name = "Palak Chauhan";
    s1.grade = 7;
    cout << "The name of the 1st student is : " << s1.name << endl;
    return 0;
}

// See how the statement of constructor will be printes twice due to declaration of two different objects.