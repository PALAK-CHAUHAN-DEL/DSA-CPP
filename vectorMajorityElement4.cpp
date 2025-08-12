// wrie a code to print the majority element of the code when it is not give there exists a majority element...
// there may or may not be a majority element...watch lec 11 of dsa series for explanation!
// u will anyways have to watch the lec for the explanation of this code.

#include <iostream>
#include <vector>
using namespace std;
int majorityElement (vector <int> vec) {
    int n = vec.size();
    int ans= 0;
    int frequency = 0;
    for (int i = 0; i < n; i++) {
        if (frequency == 0) {
            ans = vec[i];
        }
        if ( ans == vec[i]) {
            frequency ++;
        } else {
            frequency --;
        }
    }   
    int count = 0;
    for (int x : vec) {
        if (x == ans) {
            count ++;
        }
    }
    if (count > n/2) {
        return ans;
    } else {
        return -1;
    }
}

int main () {
    vector <int> vec = {2,1,2,2,3,2};
    int result = majorityElement (vec);
    cout << "The majority element is :";
    cout << result << endl;
    return 0;
}
// we get an ans even if there is no element with majority frequency.
// so is why in q where it is not give that there is definitly is a majoriy elemant, there we use the count.

