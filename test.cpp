#include<bits/stdc++.h>
using namespace std;

int main()
{
    int node, edge, start_node;
    cin >> node;
    cin >> edge;

    bool visit[node+1];
    vector<int> adj[node+1];

    for(int i=0; i<edge; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    cin >> start_node;

    for(int i=0; i<=node; i++)
        visit[i]=false;

    queue<int>q;
    q.push(start_node);
    visit[start_node] = true;

    while(!q.empty())
    {
        int fr = q.front();
        q.pop();
        cout << fr << endl;
        for(int i=0; i<adj[fr].size(); i++)
        {
            if(!visit[adj[fr][i]])
            {
                visit[adj[fr][i]]=true;
                q.push(adj[fr][i]);
            }
        }
    }
}