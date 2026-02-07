// Destructor to free the allocated memory
// Here we will use pointer and dynamic memory allocation to create a problem while using destructor as the default one will only free the statically allocated memory

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

     ~student () {  // We are creating a default destructor here, the code would have freed up memory without it too.
        cout << "Hi, I delete everything as I am a destructor, haha!" << endl;
        delete cgpaPtr; // freeing up the dynamically allocated memory. This is the extra step that makes it a destructor that deletes the dynamically allocated memory.
     }  // Now it is not a default constructor anymore due to the above delete line...

     void getInfo() {
        cout << "Name : " << name << endl;
        cout << "Cgpa : " << *cgpaPtr << endl; // dereferencing the pointer to get the value stored in it. 
     }
};

int main () {
    student s1 ("Palak", 9.8);
    s1.getInfo();
    return 0; 
}