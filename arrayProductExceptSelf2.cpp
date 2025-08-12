// this is an optimal approach to solve this problem.
// watch lec 15 for video explanation....same as problem 238 on leetcode.
// try to write it yourself... i have understood it now tho..

# include <iostream>
#include <vector>
using namespace std;

vector <int> product (vector <int> vec) {
int n = vec.size();
vector <int> prefix (n,1);
vector <int> sufix (n,1); // the sufix (n,1) means that the size of the sufix vector is gonna be n and every element of it is initialised to 1.
vector <int> ans (n,1);

// prefix
for (int i = 1; i < n; i++) {
    prefix [i] = prefix[i-1] * vec[i-1];
} 
// sufix
for (int i = n-2; i >= 0; i--) {
    sufix [i] = sufix[i+1] * vec[i+1];
}
// result
for (int i = 0; i < n; i++) {
    ans[i] = prefix[i] * sufix[i];
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
