// To understand the concept of inheritance...refer to page 98 of back of notebook...
#include <iostream>
#include <string>
using namespace std;

class person {
public: 
       string name;
       int age;

       person () { // creating an empty constructor.
             // without this we'll not be able to use inheritance.
       }
};

class student : public person {
public: // if not the s1.rollNo and s1.getInfo() will give error..
       int rollNo; // tho we want parameters name, rollNo and age, we just define rollNo here as we inherit the rest two from person.

       void getInfo () {
              cout << "Name : " << name << endl;
              cout << "Age : " << age << endl;
              cout << "Roll No : " << rollNo << endl;
       }
};

int main () {
      student s1;
      s1.name = "Palak Chauhan";
      s1.age = 17;
      s1.rollNo = 116;
      s1.getInfo();
      return 0;
}