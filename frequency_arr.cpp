#include<bits/stdc++.h>
using namespace std;
 
void freq2(vector<int>& nums){
 
    map<int,int>mp;
    
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    
}
 
int main()
{
    int n,f;
    cin>>n>>f;
    int m;
    vector<int>a;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        a.push_back(m);
    }
    
    freq2(a);
 
}