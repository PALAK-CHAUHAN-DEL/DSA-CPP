// write a code to print the product of an array except self at their respective indices.
// i have written most of it myself so yeah good going!
// watch lec 15 for video explanation.
#include <iostream>
#include <vector>
using namespace std;

vector <int> product (vector <int> &vec) {
    int n = vec.size();
    vector <int> result(n, 1);
    for (int i = 0; i < n; i++) {
        int product = 1; // reset each time the value of i changese so is why it is defined inside the 1st for loop.
        for (int j = 0; j< n; j++) {
            if ( i!= j ){
                product *= vec[j];
            }
        }  
        result [i] = product;
    }   
    return result;
}

int main () {
    vector <int> vec = {1,2,3,4};
    vector <int> result = product(vec);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

/*n the line:

vector<int> result(n, 1);

~ result is a vector of integers.
~ n is the size of the input vector (vec.size()), so result will have the same number of elements as vec.
~ The 1 means every element in result is initialized to 1.*/
