#include<bits/stdc++.h>
using namespace std;

struct item
{
    string name;
    double weight, price, unitPrice;
};

void selection(item arr[], int n){
    int m;
    for(int i=0;i<n-1;i++){
        m=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j].unitPrice > arr[m].unitPrice)
            {
                m=j;
            }
        }
        if(m != i)
        {
            swap(arr[m],arr[i]);
        }
    }
}


int main(){
    int n;
    double capacity;
    
    cin>>n;

    item arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].weight>>arr[i].price;
        arr[i].unitPrice = arr[i].price / arr[i].weight;
        
    }
    
    selection(arr,n);
    cin>>capacity;

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
 
    cout<<"Profit: "<<profit<<endl;
}