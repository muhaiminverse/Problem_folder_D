#include <bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& prices) {
     int minn = prices[0], profit = 0, cost = 0;

        for(int i=1;i<prices.size();i++){
            cost = prices[i] - minn; // cost of selling on ith day (buying stocks)
            profit = max(profit,cost); // i need to check which is max: the profit or the ith stocks cost?  (selling stocks) 
            minn = min(minn, prices[i]); // keeping track of lowest cost of stocks
        }
        
        return profit;
    
    }


    int main(){
        vector<int>a = {132,240, 159, 166};
        cout<<maxProfit(a);
    }