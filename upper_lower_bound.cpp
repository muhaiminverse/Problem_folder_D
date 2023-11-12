#include<bits/stdc++.h>
using namespace std;

auto STL(vector<int> &a, int x){
    auto lb = lower_bound(a.begin(),a.end(),x) - a.begin();

    return lb;
}

int upperBound(vector<int> &arr, int x, int n){
	// ans 2

	int low = 0, high = n-1, ans = n, mid;
		
	while(low<=high){
		mid = (low+high)/2;

		if(arr[mid]>x){
			ans = mid;
			high  = mid - 1;

		}
		else{
			low  = mid+1; 
		}

	}
	return ans;	
}

int lowerBound(vector<int> arr, int n, int x) {
	// ans 1

	int low = 0, high = n-1, ans = n, mid;
		
	while(low<=high){
		mid = (low+high)/2;

		if(arr[mid]>=x){
			ans = mid;
			high  = mid - 1;

		}
		else{
			low  = mid+1; 
		}

	}
	return ans;
}


int main(){

    vector<int>a = {1, 2, 2, 3, 3, 5};
    cout<<lowerBound(a,a.size(),2)<<endl;
    cout<<upperBound(a,a.size(),2)<<endl;
    cout<<STL(a,2)<<endl;

}