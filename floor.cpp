#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> arr, long long n, long long x){
        
        // Your code here
        
    long long low = 0, high = n - 1, mid ;
	long long ans = -1;

    while(low<=high){
        mid = (low+high)/2;
        
        if(arr[mid] == x) return mid;
        //moving to the right since the mid is less then x, and all possible candidates are in the right 
        if(arr[mid] < x){
         ans = mid;
         low = mid +1;
        }
        //moving to the left  
        else if(arr[mid] > x){
         high = mid -1;
        }
        
        
    }
    
	return ans;
    }
};



int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
