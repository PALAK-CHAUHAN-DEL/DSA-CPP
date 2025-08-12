// find the majority element in the given vector using moore's voting algorithm.
// watch lec 11 of dsa series for explanation.
// best approach to solve this problem...thhis method is used when it is given for sure that there exists a majority element.
#include <iostream>
#include <vector>
using namespace std;
int majorityElement (vector <int>& vec) {
    int n = vec.size();
    int ans = 0;
    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (frequency == 0) {
            ans = vec[i];
        } 
        if (ans == vec[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }
    return ans;
}


int main () {
    vector <int> vec = {1,2,3,4,2,3,2,2,2,2};
    int result = majorityElement(vec);
    cout << "The majority element in the given vector is : ";
    cout << result << endl;
    return 0;
}
