#include<bits/stdc++.h>
using namespace std; 
 
 bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;

        for(int num : nums){
            if(mp[num]>=1)   return true;
            mp[num]++;
        }
        return false;
    }

    int main(){

        int n;
            cin>>n;
            int k;
        vector<int>nums;
        for (int i = 0; i < n; i++)
        {
            cin>>k;
            nums.push_back(k);
        }
        containsDuplicate(nums);
    }