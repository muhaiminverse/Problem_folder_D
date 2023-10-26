#include <bits/stdc++.h>
using namespace std;

bool search(int *a, int n, int k){

  int low = 0, high = n-1;
  int mid;
  bool flag = false;

  while (low<=high)
  {
    mid = (low+high)/2;

    if(a[mid] == k) {
      flag = true;
      return 1;
    }

    if(a[mid]>k)
      high = mid-1;
    else
      low = mid+1;

  }
 
 return 0;
}

int main(){

    int n,m,q;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    sort(a,a+n);

    while (m--)
    {
        cin>>q;
     bool flag = search(a,n,q);

    if(flag)
        cout<<"found\n";
    else
        cout<<"not found\n";
    } 


}