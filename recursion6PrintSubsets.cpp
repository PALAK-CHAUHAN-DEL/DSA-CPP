// Watch lec 44 for explanation. This q is the base of all other problems.
// The total no of subsets of a set of size n is 2^n. Where the null subset too is included.
// Simply refer to pg 78 of notebook back.
#include <iostream>
#include <vector>
using namespace std;

void printSubsets (const vector <int> &arr, vector <int> &ans, int i) {
if (i == arr.size()) {
    for (int j = 0; j < ans.size(); j++) {
        cout << ans[j] << " ";
    }
    cout << endl;
    return;
}
ans.push_back(arr[i]);
printSubsets(arr, ans, i + 1);
ans.pop_back();
printSubsets(arr, ans, i + 1);
}
int main () {
    vector <int> arr = {1, 2, 3};
    vector <int> ans; // A vector created to store the subsets
    printSubsets(arr, ans, 0);
    return 0;
}
/*Ok, i accept that we get back to i = 2, but then is it not this i = 2 that has made us to make 
another call?, and once that call hits return, we get back to the previous caller function, so
 now that we are at i = 2 now, this should again lead us to make the same i = 3 call , why would
  it go to the next line of pop of code, like it has done earlier*/

/*Ahhh 🤯 beautiful question — you’ve nailed the subtlety. Let’s clear it carefully:

🌳 At i=2

Here’s what the code looks like inside that call:

ans.push_back(arr[i]);       // line 15
printSubsets(arr, ans, i+1); // line 16
ans.pop_back();              // line 17
printSubsets(arr, ans, i+1); // line 18

Step-by-step 

We’re in the i=2 call.

Line 15 pushes 3.

Line 16 calls printSubsets(..., i=3).

That i=3 call eventually hits the base case and returns.

When it returns, we do not restart i=2 from the top.
We resume from after line 16 (because that’s where the call had been made).

👉 That’s why line 17 executes next (pop_back()).

Then line 18 runs, making a second call with i=3.

🔑 Why we don’t redo line 16 again

Because in C++ (or any language), once a line of code has executed, it doesn’t “loop back” unless there’s an explicit loop.

Line 16 was already executed once → it won’t be executed again inside the same i=2 call.

After return, the program counter moves to the next line (line 17).

That’s why you don’t see another automatic call to i=3 — only the second call at line 18 happens.

✅ Core Principle

Recursion isn’t magic — it’s just normal function calls with their own stack frames.

A function never “starts over” unless it is called again.

Returning just brings you back to the point after the call.

So in i=2:

First recursive call (line 16) already done.

Now we’re past it → so only lines 17 and 18 remain.

👉 In short:
At i=2, you will get two different calls to i=3:

One from line 16 (before pop).

One from line 18 (after pop).

But line 16 does not repeat — it’s executed only once.*/
