// Watch lec 56 for explanation ... today is 27/8/25....who knows what's waiting ahead..
#include <iostream>
using namespace std;
// Tk know anything abt this code, refer to pg 87 of back of notebook.

class teacher {  // Access modifiers...(public, private.)

private : // As we don't want everyone to access salary.
    double salary; // data hiding

public: // To keep the use of properties available even outside the class..
    // properties / attributes
    string name;
    string dept;
    string subject;

    // methods / member functions
    void changeDept (string newDept) {
        dept = newDept;
    }

    // setter func
    void setSalary (double s) {
        salary = s;
    }

    // getter func
    double getSalary () {  // check notes for explanation.
        return salary;
    }   
};  // THIS IS THE SEMICOLON WE WERE TALIKNG ABT IN NOTES.

int main () {
    teacher t1; // object...real world entity
    t1.name = "Palak Chauhan";
    t1.dept = "CSE";
    t1.subject = "C++";
    
    t1.setSalary(50000); // we can't access salary directly as it's private, so we use setter func to set the value of salary.

    cout << "The salary is : " << t1.getSalary() << endl;
    cout << "The name of the teacher is : " << t1.name << endl; // In this manner we can access any of the properties of the object.
    return 0;
}