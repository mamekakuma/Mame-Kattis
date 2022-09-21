// Mame-Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int islands, bridges, fr, cntr = 0, a, b;
    bool bul = true;
    cin >> islands >> bridges;
    vector<int> adj[islands + 1];
    for (int i = 0; i < bridges; i++)
    {
        cin >> a >> b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
    vector<bool> visited(islands + 1, 0);
    visited[0] = true;
    for (int i = 1; i <= bridges; i++)
    {
        if (!visited[i])
        {
            cntr++;
            if (cntr > 1)
                break;
            visited[i] = true;
            queue<int> bfs;
            bfs.push(i);
            while (!bfs.empty())
            {
                fr = bfs.front();
                bfs.pop();
                for (auto child : adj[fr])
                {
                    if (!visited[child])
                    {
                        visited[child] = true;
                        bfs.push(child);
                    }
                }
            }
        }
    }
    if( islands == 1 )
        visited[1] = true ;
    int falses = count( visited.begin(), visited.end(), 0);
    cout << ((!falses) ? "YES" : "NO");
}