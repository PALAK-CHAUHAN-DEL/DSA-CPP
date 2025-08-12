// write a progeram to find the single number in a vector
//for its explaination watch lec 9 of apna cllg dsa series
// try to write it yourself!
//same as code vectorSingleNumber.cpp
#include <iostream>
#include <vector>
using namespace std;
int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; // XOR operation
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}