// Here we will use pointer and dynamic memory allocation to create a deep copy.
#include <iostream>
using namespace std;

class student{
public: 
     
     string name;
     float* cgpaPtr; // creating a pointer of double type

     student (string name, double cgpa) {
        this -> name = name;
        cgpaPtr = new float;    
        *cgpaPtr = cgpa; // dereferencing the cgpa ptr to store value of cgpa in it.
     } 
};