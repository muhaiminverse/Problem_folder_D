#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,k,n;
cin>>n;
  vector<int>a;
  for (int i = 0; i < n; i++)
  {
    cin>>m;
    a.push_back(m);
  }
  cin>>k;
  sort(a.begin(),a.end());

  int low = 0, high = a.size()-1;
  int mid;
  bool flag = false;
  while (low<=high)
  {

    mid = (low+high)/2;

    if(a[mid] == k) {
      flag = true;
      break;
    }

    if(a[mid]>k){
        high = mid-1;
        
    }
    else{
      low = mid+1;
      
    } 


  }
  if(flag){
      cout<<"Found it";

  }
  else{ cout<<"None";

  }
  
  
}

/*
10
3 5 7 8 9 5 1 4 6 2
0
*/