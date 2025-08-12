// write an optimal approach to find the area of the container that an hold max water.
// i did understand this approach but watch the lec 14 understand series for an even better understanding.
// this si called two pointer approach with time complexity as O(n).
#include <iostream>
#include <vector>
using namespace std;
int maxWater (vector <int> heights) {
    int n  = heights.size();
    int left  = 0, right = n - 1;
    int largestContainer = 0;
    int area;
    while (left < right) {
        int height = min (heights[left], heights[right]);
        int width = right - left;
        area = height * width;
        largestContainer = max (largestContainer, area);
    if (heights [left] < heights [right]) {
        left ++;
    } else {
        right --;
    }   
    }
    return largestContainer;
}
int main () {
    vector <int> heights = {1,8,6,2,5,4,8,3,7};
    int result = maxWater(heights); 
    cout << "The maximum water that can be stored is : " << result << endl;
    return 0; 
}