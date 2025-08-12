// Q - 27 on leetcode. To remove the all occurences of a given element from the vector and print the sixe of the new vector along with the other elements.
#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    cout << "The new array is: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return k;
} 
int main() {
    vector<int> nums = {3, 2, 2, 3, 4, 2, 5};
    int val = 2;
    int newSize = removeElement(nums, val);
    cout << "The size of the new array is: " << newSize << endl;
    return 0;
}
/*nums[k++] = nums[i];
t first assigns nums[i] to nums[k] (using the current value of k).
Then it increments k by 1.
So, in the next iteration, k will be one greater than before.*/