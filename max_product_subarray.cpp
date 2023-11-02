
#include<bits/stdc++.h>
using namespace std;

    int maxProduct(vector<int>& nums) {
        int pre = 1,sufix = 1, maxi = -1e4, n = nums.size();

        for(int i=0;i<n;i++){
            if(sufix == 0) sufix =1;
            if(pre == 0) pre =1;
            pre*=nums[i];
            sufix*=nums[n-1-i];
            maxi = max(maxi,max(pre,sufix));
        }
        return maxi;
    }
 

int main(){
vector<int>a ={1,2,3,4};
int res = maxProduct(a);

cout<<res<<" ";
}