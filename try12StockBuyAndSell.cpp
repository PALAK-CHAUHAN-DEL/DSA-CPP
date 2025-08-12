// write a code tha tells the best time to buy and sell the stock to gain max profit.
// watch lec 13 of dsa series for explanation...try to write it yourself...i couldnt understand it properly now.
// same as stockBuyAndSell.cpp
#include <iostream>
#include <vector>
using namespace std;

int maxProfit (vector <int> prices) {
    int n = prices.size();
    int bestBuy = prices[0]; // initialising the best day to buy the stock as the first day
    int maxProfit = 0; // initialising the max profit as 0.
    for (int i = 1; i < n; i++) {
    maxProfit = max(maxProfit, prices[i] - bestBuy); // the prices[i] is basically the price at which we are selling the stock.
    bestBuy = min(bestBuy, prices[i]);
}
    return maxProfit;
} 


int main () {
    vector <int> profits = { 7,1,5,3,6,4};
    int result = maxProfit(profits);
    cout << "Maximum profit: " << result << endl;
    return 0;
}
 