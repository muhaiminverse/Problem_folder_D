#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;

        while(low<=high){
           int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            //left half sorted
            if(nums[low]<=nums[mid]){
                if(nums[low]<= target && target <= nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }//right half sorted 
            else{
                if(nums[mid]<= target && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
};


int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<int> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.search(a,m)<<endl;
	}
	return 0;
}