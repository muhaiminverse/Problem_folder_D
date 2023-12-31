#include<bits/stdc++.h>
using namespace std;

    void rowise(vector<vector<int>>& matrix,int j){
        for(int i=0;i<matrix.size();i++)
            matrix[i][j]=0;
    }
    void colwise(vector<vector<int>>& matrix,int i){
        for(int j=0;j<matrix[0].size();j++)
            matrix[i][j]=0;
    }
    vector<vector<int>> setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> st;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0)
                {
                   st.insert(make_pair(i,j));
                }
            }
        }
        for(auto i : st){
            colwise(matrix,i.first);
            rowise(matrix,i.second);
        }
    // cout<<"the set"<<endl;
    //     for(auto &i : st){
    //         cout<<"{"<<i.first<<","<<i.second<<"}"<<" ";
    //     }
    // cout<<endl;
        return matrix;
    }


int main(){
vector<vector<int>> matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

vector<vector<int>> ans = setZeroes(matrix);


for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
}