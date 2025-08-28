// To study the different types of constructors. Understood it well, can write the complete thing myself.
#include <iostream>
using namespace std;

class student {  // just remember that a constructor dosn't have a type defined.
public:

    string name;
    string branch;

    // Non parameterised constructor, the one without parameters...
    student () {
    cout << "I am a non parameterised constructor!" << endl;
    }

    // Non parameterised constructor
    student (string name, string branch) { // using 'this' pointer here..pg 93 of notebook.
        this -> name  = name;
        this -> branch  = branch;
        cout << "I am a parameterised constructor!" << endl;
    } 

    // Copy constructor
    student (const student &s) {  // pass by reference
        name  = s.name;   // s is the one who's properties are to be copied...hehe  
        branch  = s.branch;
        cout << "I am a copy constructor!" << endl;
    }

    // Member function to print the name and branch of the student
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main () {
    student s1; // Calls non parameterised constructor
    student s2("Palak", "CSE"); // Calls  non parameterised and parameterised constructor
    s2.printInfo();  // Using this instead of writing individual statements.
    
    student s3(s2); // Calls copy constructor ...copies values of s2...by default a copy constructor is creted if we don't crete one before use, so need to actually define it.
    cout << "Name of student 3 : " << s3.name << endl;
    cout << "Branch of student 3 : " << s3.branch << endl;
    return 0;
}