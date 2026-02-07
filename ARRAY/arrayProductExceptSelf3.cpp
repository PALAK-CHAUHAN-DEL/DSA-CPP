// an even better approach keeping  both space and time complexity in mind.
// couldnt understad it that well...actully never tried to.
// all wht i can say is that i couldnt understand it well.
#include <iostream>
# include <vector>
using namespace std;
vector <int> product (vector <int> vec) {
    int n = vec.size();
    vector <int> ans(n,1);// prefix
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i-1] * vec[i-1];
    } 
    // suffix
    int suffix = 1;
    for (int i =  n-2; i >= 0; i--) {
        suffix *= vec[i+1];
        ans [i] *= suffix;
    }
    return ans;
}
int main () {
    vector <int> vec = {1,2,3,4};
    vector <int> result = product (vec);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

