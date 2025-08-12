// example of for each loop  of vector 
// here we will try different functions on vectors!
#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector <int> marks = {1,2,3,4,5};
    cout << "size : "<< marks.size() << endl;
    // ------------------------------------------------- trying different functions ot know their syntax

    marks.push_back(6);
    marks.push_back(7);
    cout << "size after push back : "<< marks.size() << endl;
    
    /* The push_back function in vectors is used to add a new element to the
     end of the vector. It increases the size of the vector by one and places
    the new value as the last element. For example, after marks.push_back(6);,
     the vector marks will contain {1, 2, 3, 4, 5, 6}.*/

      //------------------------------------------------------// page 33 back!
     
    for (int x : marks) {
    cout << x << " ";
    }
    cout << endl;
    //------------------------------------------------------------------------

    marks.pop_back();
     cout << "Size after pop_back : "<< marks.size()<< endl;
     //-----------------------------------------------------------------------

     for (int x : marks) {
        cout << x << " ";
    }
    cout << endl;
//----------------------------------------------------------------------
    cout << "The front value of the vector is : " << marks.front() << endl;
//----------------------------------------------------------------------
    cout << "The back value of the vector is : " << marks.back() << endl; 
//---------------------------------------------------------------------- 
    cout << "The value at a particular index is : " << marks.at(2) << endl;  
    return 0; 
}
// this will print each element of the vector on a new line.
//x acts as the iterator variable in the range-based for loop. 
//It takes the value of each element in the marks vector, one by one, 
//as the loop runs.