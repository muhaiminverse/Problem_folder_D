#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int INF = 1e9;

vector< pair<int, int> >adj_list[N];

int d[N], visited[N], previous[N]; // Added previous array to store previous node
int nodes, edges;

void dijkstra(int src) {
    for(int i = 1 ; i <= nodes ; i++) {
        d[i] = INF;
        previous[i] = -1;
    }
    d[src] = 0;

    for(int i = 0 ; i < nodes ; i++) {
        int selected_node = -1;
        for(int j = 1 ; j <= nodes ; j++) {
            if(visited[j] == 1) continue;
            if(selected_node == -1 || d[selected_node] > d[j]) {
                selected_node = j;
            }
        }
        visited[selected_node] = 1;

        for(auto adj_entry: adj_list[selected_node]) {
            int adj_node = adj_entry.first;
            int edge_cst = adj_entry.second;

            if(d[selected_node] + edge_cst < d[adj_node]) {
                d[adj_node] = d[selected_node] + edge_cst;
                previous[adj_node] = selected_node; // Store the previous node
            }
        }
    }
}

void printShortestPath(int destination) {
    if (d[destination] == INF) {
        cout << "No path to node " << destination << endl;
        return;
    }

    vector<int> path;
    while (destination != -1) {
        path.push_back(destination);
        destination = previous[destination];
    }

    cout << "Shortest path to node " << path.back() << " is: ";
    for (int i = path.size() - 1; i >= 0; i--) {
        cout << path[i];
        if (i != 0) {
            cout << " -> ";
        }
    }
    cout << endl;
}

int main() {

    cin >> nodes >> edges;

    for(int i = 0 ; i < edges ; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj_list[u].push_back({ v, w });
        adj_list[v].push_back({ u, w });
    }

    int src = 1;
    dijkstra(src);

    for(int i = 1 ; i <= nodes ; i++) {
        cout << "Shortest distance to node " << i << ": " << d[i] << endl;
        printShortestPath(i);
    }

    return 0;
}
