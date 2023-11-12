#include<bits/stdc++.h>
using namespace std;


int main(){
   
    int n = 2;
    vector<int>a = {1, 2, 2, 3, 3, 5};
    auto lb = lower_bound(a.begin(),a.end(),n) - a.begin();

    cout<<lb;
}
