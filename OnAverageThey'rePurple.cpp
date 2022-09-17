// Mame_Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int node, edges, a, b, cntr = 0, fr;
    cin >> node >> edges;
    vector<int> adj[node];
    while (edges--)
    {
        cin >> a >> b;
        adj[a - 1].emplace_back(b - 1);
        adj[b - 1].emplace_back(a - 1);
    }
    queue<int> bfs;
    bfs.push(0);
    vector<int> parent(node, 0);
    vector<bool> visited(node, 0);
     visited[0] = true;
    while(!bfs.empty())
    {
        fr = bfs.front();
        bfs.pop();
        for (auto child : adj[fr])
            if (!visited[child])
            {
                bfs.push(child);
                parent[child] = fr;
                 visited[child] = true;
            }
    }
    node--;
    while (parent[node] != 0)
    {
        node = parent[node];
        cntr++;
    }
    cout << cntr;
}