// using an optimised approach for this problem.
#include <iostream>
#include <vector>
using namespace std;
void sort (vector <int> &vec) {
    int n = vec.size();
    int countZero = 0;
    int countOne = 0;
    int countTwo = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] == 0) {
            countZero ++;
        } if (vec[i] == 1) {
            countOne ++;
        } if (vec[i] == 2) {
            countTwo ++;
        }
    } 
    int i = 0; // i have written the complete code myself except this part.
    while (countZero--) vec[i++] = 0; // ask gpt how this same thing can be sone with for loop.
    while (countOne--) vec[i++] = 1;
    while (countTwo--) vec[i++] = 2;
} 
int main () {
vector <int> vec = {2,0,2,1,1,0,1,2,0,0};
    sort (vec);
    for (int x : vec) {
        cout << x << " ";
    } 
    cout << endl;
    return 0;
}
