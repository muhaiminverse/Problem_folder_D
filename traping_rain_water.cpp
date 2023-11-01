#include<bits/stdc++.h>
using namespace std;

    int trap(vector<int>& a) {
        int l=0,r=a.size()-1,lmax =0 ,rmax = 0, res = 0 ;

        while(l<=r){
            if(a[l]<=a[r]){
                if(a[l]>=lmax){
                    lmax = a[l];
                }
                else{
                    res+=lmax-a[l];
                }
                    l++;
            }
            else{
                if(a[r]>=rmax){
                    rmax = a[r];
                }
                else{
                    res+=rmax-a[r];
                }
                 r--;
            }

        }

        return res;
    }


    int main(){

        vector<int>a = {0,1,0,2,1,0,1,3,2,1,2,1};
        cout<<trap(a);
    }