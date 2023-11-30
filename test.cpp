#include<bits/stdc++.h>
using namespace std;

void abs(vector<vector<int>>&m){

    // for (int i = 0; i < m.size(); i++)
    // {
    //     for (int j = 0; j < m[0].size(); j++)
    //     {
    //         cout<<m[i][j]<<" ";
    //     }
    // }

        for(int i=0;i<m.size();i++){
                cout<<m[0][i]<<" ";
            for(int j=0;j<m[0].size();j++){
               
            };
            cout<<endl;
        }
    
}

int main(){
  std::vector<int> arr = {1, 2, 3, 5, 6};

    // Find the position of the first element greater than 4
    auto it = std::upper_bound(arr.begin(), arr.end(), 4);

    // Check if the iterator is not pointing beyond the end of the array
    if (it != arr.end()) {
        std::cout << "The ceiling of 4 is: " << *it << std::endl;
    } else {
        std::cout << "There is no ceiling for 4 in the array." << std::endl;
    }

    return 0;
}