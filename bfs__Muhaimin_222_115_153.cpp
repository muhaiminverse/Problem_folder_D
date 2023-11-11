/*
Muhaimin Hossain
ID: 222-115-153
CSE 57(D)
*/


#include <bits/stdc++.h>
using namespace std;
const int N = 1e5;
//we require two arrays 
int visited[N];//1. checking which nodes had been visited 
vector<int> adj_list[N]; // 2. taking in account of the adjacent nods to run bfs on that perticular adjacent node

void bfs(int src)
{
    queue<int> q; // initiating queue 
    visited[src] = 1;// ticking off the current selected node 
    q.push(src); // pusing it into the queue (selected node) 
    while (!q.empty())
    {
        int head = q.front();
        q.pop();
        cout << head << " ";
        for (int adj_node : adj_list[head]) {
            if (visited[adj_node] == 0) { // if one of the adjecent node is unvisited:
                visited[adj_node] = 1; // we tick it off as visited
                q.push(adj_node); // pushing it to the queue so it runs bfs again 
            }
        }
    }

}
int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0;i < edges;i++)
    {
        //taking input of node and edges 
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int src = 0; // assigning the sourse to first node then running bfs
    bfs(src);
    return 0;
}


/*

tests  : 

input: 
6 5
0 1
2 3
1 5
2 4
5 4
1
output: 0 1 5 4 2 3 



to check the graphs in illustration: 
https://csacademy.com/app/graph_editor/
*/

