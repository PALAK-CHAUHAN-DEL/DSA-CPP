// write a code to find out the max amount of water that can be contained.
// problem 11 on leet code, watch lec 14 of dsa series.
// i have written most of the code myself...looks like i have got back on track...just couldnt think of the largest variable part....so yeah uk the rest.
// the value of previous area gets stored in the variable named largest container.
#include <iostream>
#include <vector>
using namespace std;

int maxWater (vector <int> &heights) {
    int n = heights.size();
    int left = 0, right = 0;
    int largestContainer = 0;
    int answer = 0, area;
    for (int left = 0; left < n; left++) {
        for (int right = left + 1; right < n; right++) {
            int height = min (heights[left], heights[right]);
            int width = right - left;
            area = height * width;
            largestContainer = max (largestContainer, area);
        }
    }
    return largestContainer;
}
int main () {
    vector <int> heights = {1,8,6,2,5,4,8,3,7};
    int result = maxWater (heights);
    cout << "The maximum water that can be contained is : "<< result << endl;
    return 0;
}
// yeah so... i have done almost all of it myself...just saw thta left and right part written in teh video.

