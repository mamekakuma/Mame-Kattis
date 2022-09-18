// Mame-Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int pieces;
    string routes, temp = "sdfsdf", papa, path1, path2, fr;
    cin >> pieces;
    cin.ignore();
    map<string, unordered_set<string>> adj;
    for (int j = 0; j < pieces; j++)
    {
        getline(cin, routes);
        istringstream str(routes);
        int i = 0;
        while (str >> temp)
        {
            if (i == 0)
                papa = temp;
            else
            {
                adj[papa].insert(temp);
                adj[temp].insert(papa);
            }
            i++;
        }
    }
    cin >> path1 >> path2;
    queue<string> bfs;
    bfs.push(path1);
    unordered_map<string, bool> visited;
    unordered_map<string, string> parent;
    visited[path1] = true;
    while (!bfs.empty())
    {
        fr = bfs.front();
        bfs.pop();
        for (auto child : adj[fr])
            if (!visited[child])
            {
                visited[child] = true;
                bfs.push(child);
                parent[child] = fr;
            }
    }
    stack<string> st;
    st.push(path2);
    bool bul = false;
    while (!parent[path2].empty())
    {
        if (parent[path2] == path1)
        {
            st.push(parent[path2]);
            bul = true;
            break;
        }
        st.push(parent[path2]);
        path2 = parent[path2];
    }
    if (bul)
    {
        while (!st.empty())
        {
            cout << st.top() << " ";
            st.pop();
        }
    }
    else
        cout << "no route found";
}