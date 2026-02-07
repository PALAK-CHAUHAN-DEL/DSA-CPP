// Here we will use pointer and dynamic memory allocation to create a problem while using shallow copy.
// The problem with shallow copy will reflect here....tho we don't want to change the cgpa value of student, it changes due to shallow copy.
#include <iostream>
using namespace std;

class student{
public: 
     
     string name;
     double* cgpaPtr; // creating a pointer of double type

     student (string name, double cgpa) {
        this -> name = name;
        cgpaPtr = new double;    // cgpaPtr here stores the address of the allocated memory in the heap.
        *cgpaPtr = cgpa; // dereferencing the cgpa ptr to store value of cgpa in it.
     } 

     student (student &s) { // Copy constructor to create a shallow copy.
        this -> name = s.name;  // Code would have worked without this too.
        this -> cgpaPtr = s.cgpaPtr;
     }

     void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Cgpa : " << *cgpaPtr << endl; // dereferencing the pointer to get the value stored in it. 
     }
};

int main () {
    student s1 ("Palak", 9.8);
    student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 8.5; // Changing the cgpa of s2 to 8.5 and s1's cgpa must be same as we have made no changes to it.
    s1.getInfo(); // There should be no change in the cgpa of s1 as we print it here.
    return 0; // But the cgpa of s2 changes too which we don't want, but it happens cuz of shallow copy.
}