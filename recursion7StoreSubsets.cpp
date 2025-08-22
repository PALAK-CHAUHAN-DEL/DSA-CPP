// This is to store all possible subsets of the given array, in the previous one, we just had to print, but store and return these subsets  in this one.
// Same as problem 78 on leetcode, watch lec 44 for explanation.U will unserstand this only if u have understood the previous problem of recursion.
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> subsets(vector<int>& arr, vector< vector<int>>& main, vector<int> ans, int i) {
    if (i == arr.size()) {
        main.push_back (ans);
        return main;
    }
    ans.push_back (arr[i]); // To include the current element
    subsets (arr, main, ans, i + 1);
    ans.pop_back();
    subsets (arr, main, ans, i + 1); // To exclude the current element.
    return main;
}

int main () {
    vector <int> arr = {1, 2, 3};
    vector<vector<int>> main;
    vector<int> ans;
    vector <vector<int>> result = subsets (arr, main, ans, 0);
    for (int i = 0; i <result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


        

