
#include <bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& prices) {
        int p = 0, mini = prices[0], diff;
        for(int i = 1;i<prices.size();i++){
           diff = prices[i] - mini;
           p = max(diff,p);
           mini = min(prices[i], mini);
        }
        
        return p;
        
    }


    int main(){
        vector<int>a = {7,1,5,3,6,4};
        cout<<maxProfit(a);
    }