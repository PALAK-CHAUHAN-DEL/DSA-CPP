// watch lec 26 for explanation.This is an optimised approach to this problem.
// We don't create a new vector here, and just adjust everything in the vec array only.
// similar to problem 88 on leetcode.
#include <iostream>
#include <vector>
using namespace std;

void merge (vector <int> &vec, int n, vector <int> &nums, int m) {
    int i = n - 1; // they don't point to the last element of tha array.
    int j = m - 1; // n and m are not the size of the vectors.
    int k = n + m - 1;// i, j and k are three pointters here.
    
    while (i >= 0 && j >= 0) {
        if (vec[i] > nums[j]) {
            vec[k--] = vec[i--];
        } else {
            vec[k--] = nums[j--];
        }
    }
    while (j >= 0) { //in cases when the 1st while loop breaks doe to the condition i>=0 being false after running a few times.
          vec[k--] = nums[j--];// watch lec for explanation.
    }
}
int main () {
    vector <int> vec = {1, 2, 3, 0, 0, 0};
    vector <int> nums = {2, 5, 6};
    int n = 3, m = 3;
    merge(vec, n, nums, m); // don't forget to call the function
    for (int x : vec) cout << x << " ";
    cout << endl;
    return 0;
}

/*Typical problem statement:

You are given two sorted arrays:
vec of size n + m, where the first n elements are sorted and the last m elements are zeros (placeholders).
nums of size m, sorted.
~ Merge nums into vec so that vec contains all n + m elements in sorted order, in-place (without using extra space).
*/

/*Step-by-step: DRY RUN!
i   j	k	vec[i]	nums[j]	Action	vec after step
2	2	5	3	6	vec[k]=nums[j]; j--	{1,2,3,0,0,6}
2	1	4	3	5	vec[k]=nums[j]; j--	{1,2,3,0,5,6}
2	0	3	3	2	vec[k]=vec[i]; i--	{1,2,3,3,5,6}
1	0	2	2	2	vec[k]=nums[j]; j--	{1,2,2,3,5,6}
1	-1	1			(j < 0, exit loop)	
No elements left in nums, so the merge is done.*/
 