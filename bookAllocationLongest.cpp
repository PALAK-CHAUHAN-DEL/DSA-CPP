// watch lec 21 of dsa series for explanation... it's a hard level q on leet code.
// ofc try to write it yourself....tho ik its difficult...
// try to dry run this code and watch lec for how to and for hints.
#include <iostream>
#include <vector>
using namespace std;

bool isValid (vector <int> &vec, int n, int m, int maxAllowedPages) { // maxAllowedPages is actually the mid value..that we will be assigning in other function.
    int students = 1; // initiallising students to 1 as they cannot be 0.
    int pages = 0; // and pages to 0.

    for (int i = 0; i < n; i++) {
        if (vec[i] > maxAllowedPages) { // just watch lec for explanation of this.
            return false;
        }
        if (pages + vec[i] <= maxAllowedPages) {
            pages += vec[i];
        } else {
            students ++;
            pages = vec[i];
        }
    }
    return students > m ? false : true;
}
int allocatedBooks (vector <int> &vec, int n, int m) {
    if (m > n) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += vec[i];
    }
    int ans = -1;
    int start = 0, end = sum; // range of  possible ans

    while (start <= end) {
        int mid = start + (end - start)/2;
        if (isValid (vec, n, m,mid )) { // left side will be searched now
            ans = mid;
            end = mid - 1; // as we look for even smaller value.
        } else { // right side will be searched here.
            start = mid + 1; // i have missed this line cuz of which my code became an infinite loop.
        }
    }
    return ans;
} 
int main () { // hey girl....keep in t n = vec.size() for generalisatiom and son't enter it's value manually.
    vector <int> vec = {15,17,20};
    int n = vec.size(), m = 2;
    cout << allocatedBooks (vec, n, m) << endl;
    return 0;
}
/*In the book allocation code, n is taken as the size of the 
vector, which represents the number of books. Each element in
the vector corresponds to the number of pages in a book,
so n is both the size of the vector and the total number of books.*/