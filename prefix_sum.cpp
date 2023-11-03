#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int>arr(n);

    for (int i = 0; i < arr.size(); i++)
    {
        cin>>arr[i];
    }

    vector<int>pref(n+1);
    for (int i = 0; i < pref.size(); i++)
    {
        pref[i+1] = pref[i] + arr[i];
    }
    
    cout<<"prefix sum with the size : " <<pref.size()<<"\n";
    for (int i = 0; i < pref.size(); i++)
     cout<<pref[i]<<" ";

    cout<<"\n";
    int l,r;
    cin>>l>>r;
    cout<<"sum of certain range of array\n";
    cout<<pref[r] - pref[l-1];
}