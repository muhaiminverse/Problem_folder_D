#include<bits/stdc++.h>
using namespace std; 



int maxSubArray(vector<int>& a) {
       int sum = 0, maxi = a[0], start = -1, ansStart = -1, ansEnd = -1;
       //for printing the maximum subarray we took the ansStart and ansEnd to capture that particular array

       for (int i = 0; i < a.size(); i++)
       {
            /*
            if(sum = 0) start = i; this line is wrong becasue it assigns sum to 0
            2 things happend 
                1. the sum's value became 0 , even if it was kept updated greater then 0
                2. the maximum sum was also showing incorrect becase of change in sum to 0
            */

            if(sum == 0) start = i; 

            sum+=a[i];
            if(sum > maxi){
                maxi = sum;
                ansStart = start, ansEnd = i;

            }
            
            if(sum < 0) sum = 0;


       }
       
        //printing the subarray
        cout<<"SubArray\n";
        for(int i = ansStart; i<= ansEnd; i++)
            cout<<a[i]<<" ";
         
        

        if(maxi < 0) return 0; // this is because the maximum sum was lower then 0 so we took the empty subarray which is 0
        else return maxi; 
    }

int main(){
   //vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
   //vector<int>nums = {-2,-3,4,-1,-2,1,5,-3};
    vector<int>nums = {-2,-1,-3,-1,-5};
    int ans = maxSubArray(nums); 
    cout<<"\nMaximum subarray sum: "<<ans;
}