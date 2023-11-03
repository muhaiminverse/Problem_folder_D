#include<bits/stdc++.h>
using namespace std;

vector<double>subarray;
struct item
{
    double weight, price, unitPrice;
};

//sorting
bool comp(item i1, item i2){
    return (i1.unitPrice> i2.unitPrice);
    }


//factional knapsack
double knapsack(item arr[], int n, int capacity ){
double profit = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i].weight<=capacity){
            profit+=arr[i].price;
            capacity-=arr[i].weight;
        }
        else{
            profit+=arr[i].unitPrice*capacity;
            break;
        }
    }

     return profit;
}

//subarray 
double maxSubArray(vector<double> nums) {
     
     double sum = 0, maxi = nums[0];

     for(int i = 0; i< nums.size(); i++){
         sum = sum + nums[i];
         maxi = max(maxi, sum);
         if(sum<0) sum = 0;
     }

        return maxi ;
    }


int main(){
    
    int t;
    cin>>t;

    while (t--)
    {

    int n;
    double capacity;
    cin>>n;
    item arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].weight>>arr[i].price;

        arr[i].unitPrice = arr[i].price / arr[i].weight;
        
    }
    sort(arr, arr+n, comp);
    
    
    cin>>capacity;

    double profit = knapsack(arr,n,capacity);
    
    subarray.push_back(profit);

    }
    
    double maximum_subarray_sum = maxSubArray(subarray);
    cout<<maximum_subarray_sum<<endl;
    for(double i:subarray) cout<<i<<" ";
   
}


/*
4 

5
5 45 3 50 2 20 4 20 3 26
12

3
10 60 20 100 30 120 
50

4
6 23 9 55 4 32 3 65
18

1
30 500 
10


output:

698.667
132.333 240 159.667 166.667
*/




