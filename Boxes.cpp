// Mame Kakuma
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tot, queries, val, len;
    cin >> tot;
    int boxes[tot];
    vector<int> boxTree[tot+1];
    for (int i = 1; i <= tot; i++)
    {
        cin >> val;
        if ( val != 0 )
            boxTree[val].emplace_back(i);

    }
    cin >> queries ;
    while ( queries-- )
    {
        cin >> len;
        unordered_map< int, bool> checker ;
        int counter = 0 ;
        while ( len-- )
        {
            cin >> val;
            if ( !checker[val] )
            {
                checker[ val ] = true ;
                stack<int> dfs ;
                int top ;
                dfs.push( val ) ;
                while( !dfs.empty() )
                {
                    counter++;
                    top = dfs.top();
                    dfs.pop();
                    checker[top] = true;
                    for ( auto itr : boxTree[top] )
                        if ( !checker[itr] )
                            dfs.push(itr);
                }
            }
        }
        cout << counter << "\n" ;
    }
}