// Again to understand the concept of initialisation by a constructor...pg 90 of back of notebook.
// watch lec 56 for explanation. Also refer to pg 89 for constructor notes.
#include <iostream>
using namespace std;

class student {
public:

    student () { // I am creating the constructor manually to initialise the grade of all students as 7th.
        grade = 7;
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
    
    // Even tho we are not defining the grade of the student we will cout it and see what happens.
    cout << "The name of the 1st student is : " << s1.name << endl;
    cout << "The grade of the 1st student is : " << s1.grade << endl;
    return 0;
}

