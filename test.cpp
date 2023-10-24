#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    sort(nums.begin(),nums.end());

    for(int i : nums){
        cout<<i<<" ";
    }
}